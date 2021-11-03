/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:50:39 by hharit            #+#    #+#             */
/*   Updated: 2021/11/03 13:05:26 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;
	int				len;

	len = ft_strlen(dst);
	i = 0;
	if (len < dstsize)
	{	
		while (src[i] && i < dstsize - len - 1)
		{
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = '\0';
		return (len + ft_strlen(src));
	}
	return (ft_strlen(src) + dstsize);
}
