/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverse_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:58:45 by osallak           #+#    #+#             */
/*   Updated: 2022/03/10 20:53:25 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	custom_find_max(t_stack *stack, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = stack->content;
	while (stack && i < len)
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

static void	sort_three_inverse(t_stack **b)
{
	int	min;
	int	len;

	len = ft_lstsize(*b);
	if (len == 2)
	{
		if ((*b)->content < (*b)->next->content)
			swap(*b, "sb\n");
		return ;
	}
	else if (len <= 1)
		return ;
	min = get_min(*b);
	if (min == 0)
		rotate(*b, "rb\n");
	else if (min == 1)
		reverse_rotate(b, "rrb\n");
	if ((*b)->content < (*b)->next->content)
		swap(*b, "sb\n");
}

void	inverse_sort_three(t_stack **b, int	len)
{
	int	size;
	int	max;

	size = ft_lstsize(*b);
	if (size <= 3)
		sort_three_inverse(b);
	else
	{
		max = custom_find_max(*b, len);
		if (max == 0)
			rotate(*b, "rb\n");
		else if (max == 1)
		{
			swap(*b, "sb\n");
			rotate(*b, "rb\n");
		}
		else if (max == 2)
		{
			rotate(*b, "rb\n");
			swap(*b, "sb\n");
			reverse_rotate(b, "rrb\n");
			swap(*b, "sb\n");
			rotate(*b, "rb\n");
		}
		if ((*b)->content < (*b)->next->content)
			swap(*b, "sb\n");
		reverse_rotate(b, "rrb\n");
	}
}
