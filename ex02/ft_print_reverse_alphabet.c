
#include <unistd.h>

void ft_print_reverse_alphabet(void){
    char ranger = 97;
    char texas = 122;
    char walker = texas;
    while(walker>=ranger){
        //print ascii code of walker, then walker-1;
        write(1,&walker,1);
        walker--;
    }
}
