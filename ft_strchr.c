/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:07:43 by hharit            #+#    #+#             */
/*   Updated: 2021/11/04 12:10:18 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s)
			s ++;
		return ((char *)s);
	}
	while (*s && *s != c)
		s ++;
	if (*s)
		return ((char*)s);
	return (NULL);
}
