/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:53:40 by osallak           #+#    #+#             */
/*   Updated: 2022/03/01 00:54:48 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	swap(t_stack *stack, char *move)
{
	int	tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = tmp;
	print(move);
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a, "sa\n");
	swap(b, "sb\n");
}
