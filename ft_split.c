/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:41:48 by hharit            #+#    #+#             */
/*   Updated: 2021/11/19 17:37:35 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i ++;
	return (i);
}

static int	ft_nbstrs(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s ++;
		if (*s)
			i ++;
		while (*s && *s != c)
			s ++;
	}
	return (i);
}

static char	*ft_word(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_length(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i ++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_nbstrs(s, c) + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			str[i++] = ft_word(s, c);
		while (*s && *s != c)
			s++;
	}
	str[i] = NULL;
	return (str);
}
/*
#include <stdio.h>
int main()
{
	//char *s = "      split       this for   me  !       "; 
	char **str = ft_split(NULL, ' ');
		printf("%s\n", *str);
}*/
