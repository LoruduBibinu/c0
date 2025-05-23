/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:38:24 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/28 16:45:20 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if(*str == '\0') {
		return (1);
	}
	while(*str != '\0'){
		if(*str < '0' || *str > '9'){
			return (0);
		}
		str++;
	}	
	return (1);
	
}