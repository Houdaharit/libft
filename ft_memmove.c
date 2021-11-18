/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:23:28 by hharit            #+#    #+#             */
/*   Updated: 2021/11/17 23:47:26 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;

	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if (to > from)
	{
		while (len > 0)
		{
			to[len - 1] = from[len - 1];
			len --;
		}
		return (to);
	}
	return (ft_memcpy(dst, src, len));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s[15] = "abcdefijklmn";
	char *d = NULL; 
	printf("ft => %s \n", ft_memmove(s, d, 10));
	printf("og => %s \n", memmove(s, d, 10));
}*/
