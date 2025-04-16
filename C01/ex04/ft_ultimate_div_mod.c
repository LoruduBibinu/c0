#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b){
    int mod = (*a)%(*b);
    int div = (*a)/(*b);
    *a = div;
    *b = mod;

}