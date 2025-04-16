#include <stdio.h>
void ft_swap(int *a, int *b){
    int tmp = *b;
    *b =*a;
    *a =tmp;
}
int main()
{
    int a =42;
    int b = 24;
    ft_swap(&a,&b);
    printf("%d\n",a);
}