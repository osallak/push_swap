/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:59:25 by osallak           #+#    #+#             */
/*   Updated: 2022/03/03 01:11:51 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	sort_three(t_stack **a)
{
	int	max;

	max = get_max(*a);
	if (max == 0)
		rotate(*a, "ra\n");
	else if (max == 1)
		reverse_rotate(a, "rra\n");
	if ((*a)->content > (*a)->next->content)
		swap(*a, "sa\n");
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	len;
	int	min_index;

	len = ft_lstsize(*a);
	while (len > 3)
	{
		min_index = get_min(*a);
		if (min_index <= (len / 2))
			while (min_index--)
				rotate(*a, "ra\n");
		else
			while ((len - min_index++))
				reverse_rotate(a, "rra\n");
		push(a, b, "pb\n");
		len--;
	}
	sort_three(a);
	while (*b)
		push(b, a, "pa\n");
}