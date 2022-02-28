/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_indexes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:59:24 by osallak           #+#    #+#             */
/*   Updated: 2022/03/01 00:07:16 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	get_max(t_stack *stack)
{
	int	i;
	int	tmp;

	tmp = stack->content;
	i = 0;
	while (stack)
	{
		if (tmp < stack->content)
		{
			tmp = stack->content;
			i++;
		}
		stack = stack->next;
	}
	return (i);
}

int	get_min(t_stack *stack)
{
	int	i;
	int	tmp;

	tmp = stack->content;
	i = 0;
	while (stack)
	{
		if (tmp > stack->content)
		{
			tmp = stack->content;
			i++;
		}
		stack = stack->next;
	}
	return (i);
}
