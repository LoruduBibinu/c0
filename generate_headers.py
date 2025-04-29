import os
import re

FORBIDDEN_KEYWORDS = {'if', 'while', 'for', 'switch', 'return'}

def clean_comments(content):
    # Supprime les commentaires /* ... */ multi-lignes
    return re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)

def extract_function_declarations(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    content = clean_comments(content)

    # Regex améliorée
    function_pattern = re.compile(
        r'^\s*([a-zA-Z_][\w\s\*]*?\s+\*?[a-zA-Z_]\w*\s*\([^)]*\))\s*\{',
        re.MULTILINE
    )
    matches = function_pattern.findall(content)

    valid_declarations = []
    for full_decl in matches:
        # extraire le nom de fonction pour vérifier s'il est interdit
        func_name = re.search(r'(\*?\s*)([a-zA-Z_]\w*)\s*\(', full_decl)
        if func_name and func_name.group(2) not in FORBIDDEN_KEYWORDS:
            valid_declarations.append(full_decl.strip())


    return valid_declarations

def generate_header_file(source_file, header_file):
    declarations = extract_function_declarations(source_file)

    if not declarations:
        print(f"No functions found in {source_file}, skipping.")
        return None

    with open(header_file, 'w') as file:
        guard = os.path.basename(header_file).upper().replace(".", "_")
        file.write(f'#ifndef {guard}\n')
        file.write(f'#define {guard}\n\n')

        for declaration in declarations:
            file.write(declaration + ';\n')

        file.write('\n#endif\n')

    return header_file

def main():
    include_dir = 'include'

    if not os.path.exists(include_dir):
        os.makedirs(include_dir)

    header_files = []

    for root, dirs, files in os.walk('.'):
        if re.search(r'C\d+/ex\d+', root):
            for filename in files:
                if filename.endswith('.c'):
                    source_file = os.path.join(root, filename)
                    header_file_name = f'{os.path.basename(root)}_{os.path.splitext(filename)[0]}.h'
                    header_file = os.path.join(include_dir, header_file_name)
                    generated = generate_header_file(source_file, header_file)
                    if generated:
                        header_files.append(header_file_name)

    # Generate the main header file
    with open(os.path.join(include_dir, 'mingo.h'), 'w') as main_header:
        main_header.write('#ifndef MINGO_H\n')
        main_header.write('#define MINGO_H\n\n')
        main_header.write('#include <stdio.h>\n')
        main_header.write('#include <unistd.h>\n\n')

        for header_filename in header_files:
            main_header.write(f'#include "{header_filename}"\n')

        main_header.write('\n#endif // MINGO_H\n')

    print("Header generation completed.")

if __name__ == '__main__':
    main()
