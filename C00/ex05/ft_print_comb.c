/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:20:33 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/24 19:29:10 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	hundred;
	char	dozen;
	char	unit;

	hundred = '0';
	dozen = '0';
	unit = '0';
	while (hundred <= '7')
	{
		dozen = hundred + 1;
		while (dozen <= '8')
		{
			unit = dozen + 1;
			while (unit <= '9')
			{
				write(1, &hundred, 1);
				write(1, &dozen, 1);
				write(1, &unit, 1);
				write(1, ", ", 2);
				unit++;
			}
			dozen++;
		}
		hundred++;
	}
}
