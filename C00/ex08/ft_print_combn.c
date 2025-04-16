#include <unistd.h>

// Fonction pour vérifier si le nombre est dans la plage acceptable
int verifier_nombre(int nombre) {
    // Si le nombre est inférieur à 0 ou supérieur à 9, afficher un message d'erreur et retourner 0
    if (nombre < 0 || nombre > 9) {
        write(1, "Error: parameter not accepted\n", 30);
        return 0;
    }
    return 1; // Retourner 1 si le nombre est valide
}

// Fonction récursive pour générer les combinaisons
void ecrire_combinaison(int nombre_chiffres, int *combinaison_actuelle, int index_actuel, int debut) {
    if (index_actuel == nombre_chiffres) {
        // Afficher la combinaison actuelle
        int indice_affichage = 0;
        while (indice_affichage < nombre_chiffres) {
            char caractere = '0' + combinaison_actuelle[indice_affichage];
            write(1, &caractere, 1);
            indice_affichage++;
        }
        if (combinaison_actuelle[0] != 10 - nombre_chiffres) {
            write(1, ", ", 2);
        }
        return;
    }

    int chiffre_courant = debut;
    while (chiffre_courant <= 9) {
        combinaison_actuelle[index_actuel] = chiffre_courant;
        ecrire_combinaison(nombre_chiffres, combinaison_actuelle, index_actuel + 1, chiffre_courant + 1);
        chiffre_courant++;
    }
}

// Fonction principale pour générer et afficher les combinaisons
void ft_print_combn(int nombre_chiffres) {
    // Vérifier si le nombre est valide
    if (!verifier_nombre(nombre_chiffres)) {
        return; // Quitter la fonction si le nombre n'est pas valide
    }
    int combinaison_actuelle[10];
    ecrire_combinaison(nombre_chiffres, combinaison_actuelle, 0, 0);

}
