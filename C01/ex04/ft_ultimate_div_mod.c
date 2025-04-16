#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b){
    int mod = (*a)%(*b);
    int div = (*a)/(*b);
    *a = div;
    *b = mod;

}
int main(){
    int a = 12;
    int b = 7;
    printf("a %d b %d :\n", a, b);
    ft_ultimate_div_mod(&a,&b);
    printf("Div %d mod %d :\n", a, b);

}