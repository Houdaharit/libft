/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:23:28 by hharit            #+#    #+#             */
/*   Updated: 2021/11/05 19:43:03 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const void	*str;

	str = src;
	ft_memcpy(dst, str, len);
	return (dst);
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
