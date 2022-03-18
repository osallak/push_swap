/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:14:02 by osallak           #+#    #+#             */
/*   Updated: 2022/03/17 22:31:18 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	delete_node(t_list **head, int *i)
{
	t_list	*tmp;
	t_list	*del;
	t_list	*del2;
	int		j;

	if (i == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp->move);
		free(tmp);
		return ;
	}
	tmp = *head;
	j = 0;
	while (tmp && j++ < *i - 1)
		tmp = tmp->next;
	del = tmp->next;
	del2 = del->next;
	tmp->next = del2->next;
	free_node(del);
	free_node(del2);
	*i = 0;
}

void	optimize(char *move, t_list **head)
{
	t_list	*node;

	node = lstnew_opt(ft_strdup(move));
	lst_add_back_opt(head, node);
}

void	lst_add_back_opt(t_list **head, t_list *new)
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

void	opt_rrr(t_list **head, int *i, char *new_move)
{
	t_list	*tmp;
	t_list	*del;
	int		j;

	tmp = *head;
	j = 0;
	while (tmp && j++ < *i - 1)
		tmp = tmp->next;
	del = tmp->next;
	tmp->next = del->next;
	free(del->next->move);
	del->next->move = ft_strdup(new_move);
	free_node(del);
	*i = 0;
}
