/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:17:19 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 11:33:38 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rotate(t_stack *stack, char *move, t_list **opt)
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
	optimize(move, opt);
}

void	rr(t_stack *a, t_stack *b, t_list **opt)
{
	rotate(a, "ra\n", opt);
	rotate(b, "rb\n", opt);
}
