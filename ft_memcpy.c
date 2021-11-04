/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:08:16 by hharit            #+#    #+#             */
/*   Updated: 2021/11/04 11:36:43 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*to;
	const char	*from;
	size_t		i;

	to = dst;
	from = src;
	i = 0;
	while (i < n)
	{
		to[i] = (unsigned char)from[i];
		i ++;
	}
	return (dst);
}
