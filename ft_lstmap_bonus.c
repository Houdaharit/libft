/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:41:31 by hharit            #+#    #+#             */
/*   Updated: 2021/11/12 14:16:17 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list *ptr_lst;
	
	ptr_lst = NULL;
	if (!lst || !del | !f)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&ptr_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&ptr_lst, new);
		lst = lst->next;

	}
	return (ptr_lst);
}
