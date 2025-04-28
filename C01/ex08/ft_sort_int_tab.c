/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:00:39 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/28 13:53:17 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		if (tab[i] > tab[j])
		{
			tmp = tab[i];
			tab[i] = tab[j];
			tab[j] = tmp;
		}
		i++;
		if (i >= j)
		{
			i = 0;
			j--;
		}
	}
}
