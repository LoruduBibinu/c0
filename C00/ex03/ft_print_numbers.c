#include <unistd.h>
void ft_print_numbers(){
    char start ='0';
    char end ='9';
    while (start<=end){
        write(1,&start,1);
        start++;
    }
}