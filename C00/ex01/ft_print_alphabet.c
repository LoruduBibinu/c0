
#include <unistd.h>

void ft_print_alphabet(void){
    char texas = 97;
    char ranger = 122;
    char walker = texas;
    while(walker<=ranger){
        //print ascii code of walker, then walker-1;
        write(1,&walker,1);
        walker++;
    }
}
