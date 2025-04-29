/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalise.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: EIDOLONJIMA <r.grandco@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 02:35:23 by EIDOLONJIMA       #+#    #+#             */
/*   Updated: 2025/04/29 10:38:14 by EIDOLONJIMA      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalise(char *str)
{	
	int curr;
	int next;
	char *start = str;
	
	if (str[0] >='a'&& str[0]<='z'){
		str[0]-= 32;
	}
	curr=0;
	next =1;
	while(str[next] != '\0')
	{
		next = curr+1;
		if (((str[curr] <'a'|| str[curr]>'z')&&(str[curr] <'A'|| str[curr]>'Z')&&(str[curr]<'1' ||str[curr]>'9')) && (str[next] >='a'&& str[next]<='z'))
		{
			str[next] -=32;
		}
		else if ('A' <= str[next] && str[next] <= 'Z')
		{
			str[next] += 32;
		}
		
		curr++;
	}
	return start;
}
