/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:56:18 by hharit            #+#    #+#             */
/*   Updated: 2021/11/16 17:38:08 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	sign;
	long	nbr;

	sign = 1;
	nbr = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str ++;
	if (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign = -1;
		str ++;
	}
	while (*str && ft_isdigit(*str))
	{
		nbr = (nbr * 10) + (*str - '0');
		str ++;
	}
	return (nbr * sign);
}
/*
#include <stdio.h>
int main()
{
	printf("ft: %d\n",ft_atoi("-9223372036854775809"));
	printf("org: %d\n",atoi("-9223372036854775809"));
	printf("ft: %d\n", ft_atoi("9223372036854775808"));
	printf("org: %d",atoi("9223372036854775808"));
}*/
