/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:30:29 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/28 15:00:56 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int i;
	i=0;
	while(i < n && *src !='\0')
	{
		*dest = *src;
		i++;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}