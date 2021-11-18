/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:08:16 by hharit            #+#    #+#             */
/*   Updated: 2021/11/15 22:58:33 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		to[i] = from[i];
		i ++;
	}
	return (dst);
}
