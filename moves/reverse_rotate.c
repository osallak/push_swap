/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:36:47 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 11:30:59 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	reverse_rotate(t_stack **a, char *move, t_list **opt)
{
	t_stack	*tmp;
	t_stack	*node;

	if (!*a || !(*a)->next)
		return ;
	node = *a;
	while (node && node->next && node->next->next)
		node = node->next;
	tmp = node->next;
	add_front(a, tmp);
	node->next = NULL;
	optimize(move, opt);
}
