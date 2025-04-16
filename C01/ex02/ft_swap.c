#include <stdio.h>
void ft_swap(int *a, int *b){
    int tmp = *b;
    *b =*a;
    *a =tmp;
}