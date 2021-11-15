/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:57:51 by hharit            #+#    #+#             */
/*   Updated: 2021/11/14 23:58:14 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	if (n == 0)
		return (0);
	if (!ft_strlen(s1) && !ft_strlen(s2))
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i ++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("ft: %d\n", ft_strncmp("","hello",5));
	printf("org: %d",strncmp("","hello",5));
}*/
