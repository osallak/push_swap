/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:38:19 by osallak           #+#    #+#             */
/*   Updated: 2022/03/16 16:38:40 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

bool	is_sorted(t_stack *stack)
{
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(stack);
	while (stack && stack->next && stack->content < stack->next->content)
	{
		stack = stack->next;
		i++;
	}
	return (i == (size - 1));
}
