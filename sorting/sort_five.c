/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:59:25 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 11:48:27 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a, t_list **opt)
{
	int	max;
	int	size;

	size = ft_lstsize(*a);
	if (size == 2)
	{
		if ((*a)->content > (*a)->next->content)
			swap(*a, "sa\n", opt);
	}
	else if (size == 1)
		return ;
	else
	{
		max = get_max(*a);
		if (max == 0)
			rotate(*a, "ra\n", opt);
		else if (max == 1)
			reverse_rotate(a, "rra\n", opt);
		if ((*a)->content > (*a)->next->content)
			swap(*a, "sa\n", opt);
	}
}

void	sort_five(t_stack **a, t_stack **b, t_list **opt)
{
	int	len;
	int	min_index;

	len = ft_lstsize(*a);
	while (len > 3)
	{
		min_index = get_min(*a);
		if (min_index <= (len / 2))
		{
			while (min_index-- > 0)
				rotate(*a, "ra\n", opt);
		}
		else
			while ((len - min_index++))
				reverse_rotate(a, "rra\n", opt);
		push(a, b, "pb\n", opt);
		len--;
	}
	sort_three(a, opt);
	while (*b)
		push(b, a, "pa\n", opt);
}
