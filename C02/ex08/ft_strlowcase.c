/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 02:30:28 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/29 02:31:27 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	char *s = str;
	while (*s != '\0')
	{
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		s++;
	}
	return str;
}
