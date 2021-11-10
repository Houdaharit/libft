/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:41:31 by hharit            #+#    #+#             */
/*   Updated: 2021/11/10 11:57:05 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (lst)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return (NULL);
		new = lst;
		while (new)
		{
			(*del)(new->content);
			(*f)(new->content);
			new = new->next;
		}
	}
	return (lst);
}
