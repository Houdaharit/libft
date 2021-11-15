/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:42:51 by hharit            #+#    #+#             */
/*   Updated: 2021/11/13 16:33:19 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len ++;
	while (n / 10)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	n1;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	str[len] = '\0';
	n1 = n;
	while (len - 1)
	{
		str[--len] = (n1 % 10) + '0';
		n1 /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s",ft_itoa(-1337));
}*/
