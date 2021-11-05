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

<<<<<<< HEAD
static int	ft_issep(char c, char const *set)
{
	int	i;
=======
static int ft_issep(char c, char const *set)
{
	int i;
>>>>>>> f97341ff2aad4afbe4e71fc003f79cc27579b15b

	i = 0;
	while (set[i] && c != set[i])
		i++;
<<<<<<< HEAD
	if (set[i])
=======
	if(set[i])
>>>>>>> f97341ff2aad4afbe4e71fc003f79cc27579b15b
		return (1);
	return (0);
}

<<<<<<< HEAD
static char	const	*ft_endstr(char const *s1, char const *set)
{
	int	len;
=======
static char const *ft_endstr(char const *s1, char const *set)
{
	int len;
>>>>>>> f97341ff2aad4afbe4e71fc003f79cc27579b15b

	len = 0;
	while (s1[len])
		len ++;
	while (len && ft_issep(s1[len - 1], set))
		len --;
	return (s1 + len);
}
<<<<<<< HEAD

static int	ft_lenstr(char const *s1, char const *set)
{
	char const	*ptr;
	int			len;

	ptr = ft_endstr(s1, set);
	len = 0;
	while (*s1 && ft_issep(*s1, set))
=======
 
static int ft_lenstr(char const *s1, char const *set)
{
	char const	*ptr;
	int len;

	ptr = ft_endstr(s1, set);
	len = 0;
	while (*s1 && ft_issep(*s1,set))
>>>>>>> f97341ff2aad4afbe4e71fc003f79cc27579b15b
		s1++;
	while (s1[len] && &s1[len] != ptr)
		len++;
	return (len);
}
<<<<<<< HEAD

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
=======

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	char const *ptr;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_lenstr(s1,set) + 1));
	if (!str)
		return (NULL);
	ptr = ft_endstr(s1, set);
	while (*s1 && ft_issep(*s1,set))
>>>>>>> f97341ff2aad4afbe4e71fc003f79cc27579b15b
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
<<<<<<< HEAD
	char const *str = "hello****everyone******-";
	char const *set = "he*-";
=======
	char const *str = "-*hello****everyone******-";
	char const *set = "*-/he";
>>>>>>> f97341ff2aad4afbe4e71fc003f79cc27579b15b
	printf("%s",ft_strtrim(str, set));
}*/
