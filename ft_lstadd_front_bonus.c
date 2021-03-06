/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:03:54 by hharit            #+#    #+#             */
/*   Updated: 2021/11/21 17:24:29 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new -> next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>
int main()
{
	t_list *new;
	t_list	*head;
	t_list	*last;
	t_list	*add;

	head = ft_lstnew("head");
	new = ft_lstnew("new");
	last = malloc(sizeof(t_list));
	last = head;
	for (int i = 0; i< 3; i++)
	{
		add = ft_lstnew("add");
		last -> next = add;
		last = add;
	}
	ft_lstadd_front(head,new);
	printf("%s",head ->content);
}*/
