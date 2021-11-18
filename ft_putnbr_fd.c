/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:55:32 by hharit            #+#    #+#             */
/*   Updated: 2021/11/16 20:40:41 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int		n1;

	if (n < 0)
	{
		n1 = n * -1;
		write (fd, "-", 1);
	}
	else
		n1 = n;
	if (n1 > 9)
	{
		ft_putnbr_fd (n1 / 10, fd);
		ft_putchar_fd ((n1 % 10) + '0', fd);
	}
	else
		ft_putchar_fd(n1 + '0', fd);
}
/*
int main()
{
	ft_putnbr_fd(2, 1);
}*/
