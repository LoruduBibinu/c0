#include "mingo.h"

void	ft_readblespace(int count)
{
	printf("\n exo %d \n", count);
}

void	ft_c00(int count)
{
	ft_readblespace(count++);
	ft_putchar('A');
	ft_readblespace(count++);
	ft_print_alphabet();
	ft_readblespace(count++);
	ft_print_reverse_alphabet();
	ft_readblespace(count++);
	ft_print_numbers();
	ft_readblespace(count++);
	ft_is_negative(-1);
	ft_readblespace(count++);
	ft_print_comb();
	ft_readblespace(count++);
	ft_print_comb2();
	ft_readblespace(count++);
	ft_putnbr(42253);
	ft_readblespace(count++);
	ft_print_combn(5);
}

void	ft_c01_01(int count, int nbr)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 10;
	ft_readblespace(count++);
	printf("nbr = %d\n", nbr);
	ft_ft(&nbr);
	printf("nbr = %d\n", nbr);
	ft_readblespace(count++);
	/*ft_ultimate_ft(nbr);*/
	ft_readblespace(count++);
	ft_swap(&a, &b);
	ft_readblespace(count++);
	ft_div_mod(10, 3, &div, &mod);
	ft_readblespace(count++);
	ft_ultimate_div_mod(&a, &b);
	ft_readblespace(count++);
	ft_putstr("Hello");
	ft_readblespace(count++);
	ft_strlen("Hello");
	ft_readblespace(count++);
}

void	ft_c01_02()
{
	int	tab[5];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	ft_rev_int_tab(tab, 5);
}

int	main(void)
{
	int	count;
	int	nbr;

	nbr = 0;
	count = 0;
	ft_c00(count);
	printf("\n C01 \n");
	ft_c01_01(count, nbr);
	ft_c01_02();
	return (0);
}
