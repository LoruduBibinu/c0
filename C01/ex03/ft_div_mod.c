#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod =a%b;
}
int main(){
    int a = 55;
    int b = 10;
    int div;
    int mod;
    ft_div_mod(a,b,&div,&mod);
    printf("Division de %d par %d :\n", a, b);
    printf("Résultat : %d\n", div);
    printf("Modulo : %d\n", mod);
}