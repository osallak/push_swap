/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverse_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:58:45 by osallak           #+#    #+#             */
/*   Updated: 2022/03/14 17:09:06 by osallak          ###   ########.fr       */
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
	if (size == 3 && len == 3)
		sort_three_inverse(b);
	else if (len == 2)
	{
		if ((*b)->content < (*b)->next->content)
			swap(*b, "sb\n");
		else
			return ;
	}
	else if (len <= 1)
		return ;
	else if (len == 3)
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

void	sort_three_full_list(t_stack **a, int len)
{
	int	size;
	int	min;

	size = ft_lstsize(*a);
	if (size == 3 && len == 3)
		sort_three(a);
	else if (len <= 1 || size <= 1)
		return ;
	else if (len == 2)
	{
		if ((*a)->content > (*a)->next->content)
			swap(*a, "sa\n");
		else
			return ;
	}
	else if (len == 3)
	{
		min = custom_find_min(*a, len);
		if (min == 0)
			rotate(*a, "ra\n");
		else if (min == 1)
		{
			swap(*a, "sa\n");
			rotate(*a, "ra\n");
		}
		else if (min == 2)
		{
			rotate(*a, "ra\n");
			swap(*a, "sa\n");
			reverse_rotate(a, "rra\n");
			swap(*a, "sa\n");
			rotate(*a, "ra\n");
		}
		if ((*a)->content > (*a)->next->content)
			swap(*a, "sa\n");
		reverse_rotate(a, "rra\n");
	}
}

int	custom_find_min(t_stack *stack, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = stack->content;
	while (stack && i < len)
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