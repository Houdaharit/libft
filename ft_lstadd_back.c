/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:32:07 by hharit            #+#    #+#             */
/*   Updated: 2021/11/10 15:12:08 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
	{
		while ((*lst)->next)
			*lst = (*lst)->next;
		(*lst)->next = new;
	}
}
/*
#include <stdio.h>
int main()
{
	t_list *new;
    t_list  *lst;
    t_list  *last;
    t_list  *add;

    lst = ft_lstnew("head");
    new = ft_lstnew("new");
    last = malloc(sizeof(t_list));
    last = lst;
    for (int i = 0; i< 3; i++)
    {
        add = ft_lstnew("add");
        last -> next = add;
        last = add;
	}
	ft_lstadd_back(&lst, new);
	while(lst->next)
		lst = lst -> next;
	printf("%s", lst ->content);
}*/
