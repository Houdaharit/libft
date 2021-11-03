/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:30:14 by hharit            #+#    #+#             */
/*   Updated: 2021/11/03 17:49:00 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	 char	*ptr;

	ptr = NULL;
	if (c == '\0')
	{
		while (*s)
			s ++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s ++;
	}
	return (ptr);
}
