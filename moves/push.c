/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:41:45 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 11:30:26 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	push(t_stack **a, t_stack **b, char *move, t_list **opt)
{
	t_stack	*node;

	if (!a || !*a)
		return ;
	add_front(b, ft_add_new((*a)->content));
	node = (*a)->next;
	free(*a);
	*a = node;
	optimize(move, opt);
}	
