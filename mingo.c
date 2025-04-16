#include "mingo.h"

int main(void) {
    // Exemples d'appels de fonctions
    ft_putchar('A');
    ft_print_alphabet();
    ft_print_reverse_alphabet();
    ft_print_numbers();
    ft_is_negative(-1);
    ft_print_comb();
    ft_print_comb2();
    ft_putnbr(42);
    ft_print_combn(5);
    ft_ft(0);
    ft_ultimate_ft();
    int a = 5, b = 10;
    ft_swap(&a, &b);
    int div, mod;
    ft_div_mod(10, 3, &div, &mod);
    ft_ultimate_div_mod(&a, &b);
    ft_putstr("Hello");
    ft_strlen("Hello");
    int tab[] = {1, 2, 3, 4, 5};
    ft_rev_int_tab(tab, 5);

    return 0;
}
