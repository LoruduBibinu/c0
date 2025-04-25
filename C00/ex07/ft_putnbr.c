/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:53:28 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/25 18:37:50 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int nb, int length)
{
	int		j;
	char	c;
	int		divisor;

	while (length > 0)
	{
		divisor = 1;
		j = 1;
		while (j < length)
		{
			divisor *= 10;
			j++;
		}
		c = (nb / divisor) % 10 + '0';
		write(1, &c, 1);
		length--;
	}
}

int	ft_check_negative(long int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	return (nb);
}

int	ft_is_integer(int nb)
{
	if (nb < -2147483647 || nb > 2147483647)
	{
		write(1, "Error: parameter wasn't an integer", 35);
		return (0);
	}
	return (1);
}

void	ft_putnbr(long int nb)
{
	int	length;
	int	tmp;

	if (!ft_is_integer(nb))
	{
		return ;
	}
	length = 0;
	nb = ft_check_negative(nb);
	tmp = nb;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		length++;
	}
	ft_write_number(nb, length);
}
