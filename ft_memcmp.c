/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:04:57 by hharit            #+#    #+#             */
/*   Updated: 2021/11/20 00:29:14 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	size_t	i;

	i = 0;
	while (i < n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		i ++;
	if (i == n)
		return (0);
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	const int array1[] = {3, 15, 12};
	const int array2[]= {32, 15, 12};
	printf("ft : %d\n",ft_memcmp(array1, array2, sizeof(int) * 3));
	printf("org : %d\n",memcmp(array1, array2, sizeof(int) * 3));
}*/
