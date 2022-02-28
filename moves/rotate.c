/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:17:19 by osallak           #+#    #+#             */
/*   Updated: 2022/02/26 23:42:55 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rotate(t_stack *stack, char *message)
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
	print(message);
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a, "sa\n");
	rotate(b, "sb\n");
}
