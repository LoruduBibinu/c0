/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:45:30 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/24 17:46:49 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	texas;
	char	ranger;
	char	walker;

	texas = 97;
	ranger = 122;
	walker = texas;
	while (walker <= ranger)
	{
		write(1, &walker, 1);
		walker++;
	}
}
