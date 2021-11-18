/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:50:55 by hharit            #+#    #+#             */
/*   Updated: 2021/11/17 23:33:09 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i ++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	int array[5];
	size_t  i = 0;
	memset(array,8, sizeof(int) * 3);
	while (i < 3)
	{
		printf("%d ", array[i]);
		i++;
	}
}*/
