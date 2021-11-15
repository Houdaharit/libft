/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:01:02 by hharit            #+#    #+#             */
/*   Updated: 2021/11/14 23:59:20 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t		i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n && str[i] != (unsigned char)c)
		i ++;
	if (i < n)
		return ((void *)(s + i));
	return (NULL);
}
