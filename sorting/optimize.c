/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:41:45 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 10:47:06 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

static void	lst_add_back(t_list **head, t_list *new)
{
	t_list	*tmp;

	if (!*head)
	{
		*head = new;
		return ;
	}
	tmp = *head;
	while (tmp && tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void	optimize(char *move, t_list **head)
{
	t_list	*node;

	node = lstnew(ft_strdup(move));
	lst_add_back(head, node);
}
