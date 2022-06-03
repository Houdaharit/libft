/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:23:11 by hharit            #+#    #+#             */
/*   Updated: 2021/11/19 17:48:10 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_str(unsigned int n, int len, int sign)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				sign;
	unsigned int	n1;

	sign = 0;
	if (n < 0)
	{
		n1 = n * -1;
		sign = 1;
	}
	else
		n1 = n;
	str = ft_str(n1, ft_intlen(n), sign);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(-9));
}*/
