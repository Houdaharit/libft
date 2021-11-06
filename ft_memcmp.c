/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:04:57 by hharit            #+#    #+#             */
/*   Updated: 2021/11/05 19:44:16 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	
	while (i < n)
	{
		if (*(unsigned char*)str1++ - *(unsigned char*)str2++)
			return (*(unsigned char*)str1++ - *(unsigned char*)str2++);
		i++;
	}
	return (0);
	
}/*
#include <stdio.h>
int main()
{
	const char str1[10] = "1cvscsk";
	const char str2[10] = "9cgsucsi";
	printf("%d\n", ft_memcmp(str1, str2, 5));
}*/
