/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:23:28 by hharit            #+#    #+#             */
/*   Updated: 2021/11/15 00:12:28 by hharit           ###   ########.fr       */
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
int main()
{
	char s[15] = "abcdefijklmn";
	char *d = s + 3; 
	char *e = s + 3;
	ft_memcpy(d, s, 4);
	memcpy(e, s, 4);
	printf("ft => %s \n", d);
	printf("og => %s \n", e);
	
}*/
