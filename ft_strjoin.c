/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:01:53 by hharit            #+#    #+#             */
/*   Updated: 2021/11/05 19:19:43 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(char const *s1, char const *s2)
{
	int	len;

	len = 0;
	while (s1[len])
		len ++;
	while (*s2)
	{
		len ++;
		s2 ++;
	}
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_length(s1, s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2 ++;
	}
	str[i] = *s2;
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_strjoin("hello ","everyone"));
}*/
