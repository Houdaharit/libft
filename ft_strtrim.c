/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:26:15 by hharit            #+#    #+#             */
/*   Updated: 2021/11/05 17:58:35 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issep(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] && c != set[i])
		i++;
	if (set[i])
		return (1);
	return (0);
}

static char	const	*ft_endstr(char const *s1, char const *set)
{
	int	len;

	len = 0;
	while (s1[len])
		len ++;
	while (len && ft_issep(s1[len - 1], set))
		len --;
	return (s1 + len);
}

static int	ft_lenstr(char const *s1, char const *set)
{
	char const	*ptr;
	int			len;

	ptr = ft_endstr(s1, set);
	len = 0;
	while (*s1 && ft_issep(*s1, set))
		s1++;
	while (s1[len] && &s1[len] != ptr)
		len++;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	char const	*ptr;
	char		*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_lenstr(s1, set) + 1));
	if (!str)
		return (NULL);
	ptr = ft_endstr(s1, set);
	while (*s1 && ft_issep(*s1, set))
		s1++;
	while (s1[i] && &s1[i] != ptr)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
int main()
{
	char const *str = "hello****everyone******-";
	char const *set = "he*-";
	printf("%s",ft_strtrim(str, set));
}*/
