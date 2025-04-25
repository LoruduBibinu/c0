/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:05:19 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/25 18:07:53 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp[size];
	int	k;

	j = 0;
	i = size;
	while(i>0)
	{
		tmp[j]=tab[i];
		j++;
		i--;
	}
	j=0;
	while(j < size)
	{
		tab[j]=tmp[j];
		j++;
	}
	printf("tab = ");
	k = 0;
	while(k < size)
	{
		printf("%d ", tab[k]);
		k++;
	}
	printf("\n");
}
