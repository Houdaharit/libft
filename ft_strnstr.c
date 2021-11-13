/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:49:31 by hharit            #+#    #+#             */
/*   Updated: 2021/11/13 03:58:10 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

		if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		if (*haystack == *needle)
		{
			i = 1;
			while (*(haystack + i) && *(needle + i)
				&& *(haystack + i) == *(needle + i) && i < len)
				i ++;
			if (i == len)
				return ((char *)haystack);
		}
		haystack ++;
	}
	return (NULL);
}
