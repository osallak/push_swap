/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:10:30 by osallak           #+#    #+#             */
/*   Updated: 2022/03/18 01:11:08 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	swap_bonus(t_stack *stack)
{
	int	tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = tmp;
}

void	ss_bonus(t_stack *a, t_stack *b)
{
	swap_bonus(a);
	swap_bonus(b);
}

void	reverse_rotate_bonus(t_stack **a)
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
}

void	rrr_bonus(t_stack **a, t_stack **b)
{
	reverse_rotate_bonus(a);
	reverse_rotate_bonus(b);
}

void	rotate_bonus(t_stack *stack)
{
	int	holder;

	if (!stack || !stack->next)
		return ;
	holder = stack->content;
	while (stack && stack->next)
	{
		stack->content = stack->next->content;
		stack = stack->next;
	}
	stack->content = holder;
}
