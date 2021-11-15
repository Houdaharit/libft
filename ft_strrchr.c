/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:30:14 by hharit            #+#    #+#             */
/*   Updated: 2021/11/15 02:20:53 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	if ((char)c == '\0')
	{
		while (*s)
			s ++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s ++;
	}
	return (ptr);
}
