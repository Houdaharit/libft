/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:20:57 by hharit            #+#    #+#             */
/*   Updated: 2021/11/13 01:08:47 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*object;

	object = (void *)malloc(size * count);
	if (!object)
		return (NULL);
	ft_bzero(object, count * size);
	return (object);
}/*
#include <stdio.h>
#include <string.h>
int main()
{
	int size = 8539;
	void * d1 = ft_calloc(size, sizeof(int));
    void * d2 = calloc(size, sizeof(int));
	if (memcmp(d1, d2, size * sizeof(int)))
	printf("fail");
	else printf("success");
}*/
