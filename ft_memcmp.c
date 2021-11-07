/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:04:57 by hharit            #+#    #+#             */
/*   Updated: 2021/11/07 16:06:28 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	size_t		i;
	unsigned  const char	*str1;
	unsigned  const char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if ((str1 + i) - *(str2+ i))
			return (*(str1 + i) - *(str2 + i));
		i++;
	}
	return (0);
<<<<<<< HEAD
}

=======
	
}/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char str1[10] = "1cvscsk";
	const char str2[10] = "9cgsucsi";
	printf("%d\n", ft_memcmp(str1, str2, 5));
}
}*/

