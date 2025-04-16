#include <stdio.h>
void ft_rev_int_tab(int *tab, int size){
    int i = size;
    int j = 0;
    int tmp[size];
    while(i>0){
        tmp[j]=tab[i];
        j++;
        i--;
    }
    j=0;
    while(j < size){
        tab[j]=tmp[j];
        j++;
    }
printf("tab = ");
    for (int k = 0; k < size; k++) {
        printf("%d ", tab[k]);
    }
    printf("\n");
}