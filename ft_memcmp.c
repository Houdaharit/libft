/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:04:57 by hharit            #+#    #+#             */
/*   Updated: 2021/11/05 19:44:16 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (unsigned char)str1[i] == (unsigned char)str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
