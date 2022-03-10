/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_indexes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:59:24 by osallak           #+#    #+#             */
/*   Updated: 2022/03/08 16:24:18 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	get_max(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = stack->content;
	while (stack)
	{
		if (tmp < stack->content)
		{
			tmp = stack->content;
			j = i;
		}
		stack = stack->next;
		i++;
	}
	return (j);
}

int	get_min(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = stack->content;
	while (stack)
	{
		if (tmp > stack->content)
		{
			tmp = stack->content;
			j = i;
		}
		stack = stack->next;
		i++;
	}
	return (j);
}
