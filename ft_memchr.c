/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:01:02 by hharit            #+#    #+#             */
/*   Updated: 2021/11/04 12:10:49 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = s;
	while (i < n && str[i] != (unsigned char)c)
		i ++;
	if(i < n)
		return (s + i);
	return (NULL);
}
