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
}
int main(){
    int tab[] = {1, 2, 3, 4, 5,12,24};
    int size = 7;
    ft_rev_int_tab(tab, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}