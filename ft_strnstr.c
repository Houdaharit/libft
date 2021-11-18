/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:49:31 by hharit            #+#    #+#             */
/*   Updated: 2021/11/17 23:58:03 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	if (!ft_strlen(haystack) && !ft_strlen(needle))
		return ("");
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
				j ++;
			if (!needle[j])
				return ((char *)(haystack + i));
		}
		i ++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *s1 = "A";
   size_t max = strlen(s1);
    char *i1 = strnstr(s1, s1, 2);
    char *i2 = ft_strnstr(s1, s1, 2);
	printf("org :%s\n", i1);
	printf("ft : %s\n",i2);
}*/
