/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:17:28 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/29 11:25:28 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../include/ex00_ft_putchar.h"

void	ft_putstr_non_printable(char *str)
{
	char	*hex = "0123456789abcdef";
	
	while(*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[(*str >> 4) & 0xF]); // partie haute du byte
			ft_putchar(hex[*str & 0xF]);        // partie basse du byte
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
	write(1,"\n", 1);
}
