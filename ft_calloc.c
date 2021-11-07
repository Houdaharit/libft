/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:20:57 by hharit            #+#    #+#             */
/*   Updated: 2021/11/07 16:05:06 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*object;

	object = malloc(size * count);
	if (!object)
		return (NULL);
	ft_bzero(object, 0);
	return (object);
}
