/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:36:47 by osallak           #+#    #+#             */
/*   Updated: 2022/02/28 02:39:35 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static t_stack	*before_last(t_stack *stack)
{
	while (stack && stack->next && stack->next->next )
		stack = stack->next;
	return (stack);
}

void	reverse_rotate(t_stack **a, char *move)
{
	t_stack	*tmp;
	t_stack	*node;

	if (!*a || !(*a)->next)
		return ;
	node = before_last(*a);
	tmp = ft_lstlast(*a);
	node->next = NULL;
	add_front(a, tmp);
	print(move);
}
