/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:45:24 by hharit            #+#    #+#             */
/*   Updated: 2021/11/12 00:45:31 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{	
	write (fd, &c, 1);
}
/*
#include "fcntl.h"
int main()
{
	int fd = open("cj",O_RDWR | O_CREAT , 0666);
	ft_putchar_fd('d',fd);

}*/