/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mingo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:52:39 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/29 11:19:53 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/mingo.h"

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

void	ft_c01_02(int count)
{
	int	tab[5];
	int size;
	
	size=5;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	ft_rev_int_tab(tab, 5);
	tab[0] = 12;
	tab[1] = 32;
	tab[2] = 31;
	tab[3] = 14;
	tab[4] = 51;
	ft_readblespace(count++);
	ft_sort_int_tab(tab,size);
	int i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	
	
}
void	ft_c03(int count)
{
	char src1[] = "copie ex1";
	char src2[] = "copie ex2";
    char dest1[50];
	char *str1 ="bonjour";
	char *str2 = "b02njour";
	char *str3 ="";
	char *str4 ="miNgo";
	char *str5 = "UPPERCASE";
	char *st1 ="Phrase de Test 1 ";
	char *st2 ="phrase de test 2 \n";
	char dest2[50];
	unsigned int n = 5;
	int alpha;
	ft_readblespace(count++);
	ft_strcpy(dest1, src1);
	printf("After ft_strcpy: %s\n", dest1);
	ft_readblespace(count++);
	ft_strncpy(dest2, src2, n);
	printf("After ft_strncpy: %s\n", dest2);
	ft_readblespace(count++);
	alpha = ft_str_is_alpha(str1);
	printf("Is str1 alpha? %d\n", alpha);
	alpha = ft_str_is_alpha(str2);
	printf("Is str2 alpha? %d\n", alpha);
	alpha = ft_str_is_alpha(str3);
	printf("Is str3 alpha? %d\n", alpha);
	str1 ="0565105";
	ft_readblespace(count++);
	alpha = ft_str_is_numeric(str1);
	printf("Is str1 numeric? %d\n", alpha);
	alpha = ft_str_is_numeric(str2);
	printf("Is str2 numeric? %d\n", alpha);
	alpha = ft_str_is_numeric(str3);
	printf("Is str3 numeric? %d\n", alpha);
	ft_readblespace(count++);
	alpha =ft_str_is_lowercase(str1);
	printf("Is str1 lowercase? %d\n", alpha);
	alpha =ft_str_is_lowercase(str2);
	printf("Is str2 lowercase? %d\n", alpha);
	alpha =ft_str_is_lowercase(str3);
	printf("Is str3 lowercase? %d\n", alpha);
	alpha = ft_str_is_lowercase(str4);
	printf("Is str4 lowercase? %d\n", alpha);
	ft_readblespace(count++);
	alpha =ft_str_is_uppercase(str1);
	printf("Is str1 uppercase? %d\n", alpha);
	alpha =ft_str_is_uppercase(str2);
	printf("Is str2 uppercase? %d\n", alpha);
	alpha =ft_str_is_uppercase(str3);
	printf("Is str3 uppercase? %d\n", alpha);
	alpha = ft_str_is_uppercase(str4);
	printf("Is str4 uppercase? %d\n", alpha);
	alpha = ft_str_is_uppercase(str5);
	printf("Is str5 uppercase? %d\n", alpha);
	ft_readblespace(count++);
	alpha = ft_str_is_printable(st1);
	printf("is st1 printable ?  %d\n",alpha);
	alpha = ft_str_is_printable(st2);
	printf("is st2 printable ?  %d\n",alpha);
	ft_readblespace(count++);
	char *stUp = ft_strupcase(src1);
	printf("%s\n",stUp);
	ft_readblespace(count++);
	char src3[] = "NIIBIBIBIBBSIQONZ";
	stUp = ft_strlowcase(src3);
	printf("%s\n",stUp);
	ft_readblespace(count++);
	char src4[] ="ceci est une Phrase lOngue et chiAnte c'est cool t 4me ère";
	char *st4 ="ceci est une Phrase lOngue et chiAnte c'est cool t 4me ère";
	stUp = ft_strcapitalise(src4);
	printf("%s\n",stUp);
	
	ft_readblespace(count++);
	alpha= ft_strlcpy(stUp,st4,9);
	printf("alpha %u phrase %s \n",alpha,stUp);
	ft_readblespace(count++);
	ft_putstr_non_printable(st4);
	
}
int	main(void)
{
	int	count;
	int	nbr;

		nbr = 0;
		//after each function, increment the count
		
		count = 0;
		/*ft_c00(count);
		nbr = 1;
		printf("\n C01 \n");
		ft_c01_01(count, nbr);
		ft_c01_02(count);*/
		nbr = 02;
		printf("C%d \n", nbr);
		ft_c03(count);
		return (0);
}
