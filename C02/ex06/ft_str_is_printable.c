/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:41:04 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/29 01:59:37 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{

	while (*str != '\0')
	{
		if(*str < 32 || *str >126 )
		{
			return (0);
		}
		str++;
	}
	return (1); 
}
