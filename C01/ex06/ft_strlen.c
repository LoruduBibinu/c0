#include <stdio.h>
int ft_strlen(char *str){
    int i;  
    while (str[i]){
        i++;
    }
    return i;
}
int main(){
    char * str = "BONSI=OIR PARIIS";
   int i;
   i = ft_strlen(str);
    printf("%d\n",i);
}