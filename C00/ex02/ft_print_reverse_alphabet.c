/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:48:04 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/24 17:49:02 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	texas;
	char	ranger;
	char	walker;

	ranger = 97;
	texas = 122;
	walker = texas;
	while (walker >= ranger)
	{
		write(1, &walker, 1);
		walker--;
	}
}
