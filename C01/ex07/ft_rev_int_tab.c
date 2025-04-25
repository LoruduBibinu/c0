/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:05:19 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/25 19:39:02 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	k;
	int	tmp;

	k = 0;
	j = size - 1;
	while (k < j)
	{
		tmp = tab[k];
		tab[k] = tab[j];
		tab[j] = tmp;
		k++;
		j--;
	}
	k =0 ;
	while (k < size)
	{
		printf("%d ", tab[k]);
		k++;
	}
	printf("\n");
}
