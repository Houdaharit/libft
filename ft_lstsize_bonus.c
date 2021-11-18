/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:47:36 by hharit            #+#    #+#             */
/*   Updated: 2021/11/17 11:09:59 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst -> next;
		size ++;
	}
	return (size);
}
/*
#include <stdio.h>
int main()
{
	t_list *head;
	t_list *end;
	t_list *new;

	head = malloc(sizeof(t_list));
	head -> next = NULL;
	new = malloc (sizeof(t_list));
	new = head;
	for (int i = 0; i < 7 ; i ++)
	{
		end = malloc(sizeof(t_list));
		end -> next = NULL;
		new -> next = end;
		new = end;
	}
	printf("%d", ft_lstsize(head));
}*/
