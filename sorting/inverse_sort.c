/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverse_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:58:45 by osallak           #+#    #+#             */
/*   Updated: 2022/03/16 16:35:06 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static void	sort_three_inverse(t_stack **b, t_list **opt)
{
	int	min;
	int	len;

	len = ft_lstsize(*b);
	if (len == 2)
	{
		if ((*b)->content < (*b)->next->content)
			swap(*b, "sb\n", opt);
		return ;
	}
	else if (len <= 1)
		return ;
	min = get_min(*b);
	if (min == 0)
		rotate(*b, "rb\n", opt);
	else if (min == 1)
		reverse_rotate(b, "rrb\n", opt);
	if ((*b)->content < (*b)->next->content)
		swap(*b, "sb\n", opt);
}

static void	inverse_sort_three_full_list(t_stack **b, int len, t_list **opt)
{
	int	max;

	max = custom_find_max(*b, len);
	if (max == 0)
		rotate(*b, "rb\n", opt);
	else if (max == 1)
	{
		swap(*b, "sb\n", opt);
		rotate(*b, "rb\n", opt);
	}
	else if (max == 2)
	{
		rotate(*b, "rb\n", opt);
		swap(*b, "sb\n", opt);
		reverse_rotate(b, "rrb\n", opt);
		swap(*b, "sb\n", opt);
		rotate(*b, "rb\n", opt);
	}
	if ((*b)->content < (*b)->next->content)
		swap(*b, "sb\n", opt);
	reverse_rotate(b, "rrb\n", opt);
}

void	inverse_sort_three(t_stack **b, int len, t_list **opt)
{
	int	size;

	size = ft_lstsize(*b);
	if (size <= 3)
		sort_three_inverse(b, opt);
	else if (len <= 1 | size <= 1)
		return ;
	else if (len == 2)
	{
		if ((*b)->content < (*b)->next->content)
			swap(*b, "sb\n", opt);
		return ;
	}
	else
		inverse_sort_three_full_list(b, len, opt);
}

static void	custom_sort_three(t_stack **a, int len, t_list **opt)
{
	int	min;

	min = custom_find_min(*a, len);
	if (min == 0)
		rotate(*a, "ra\n", opt);
	else if (min == 1)
	{
		swap(*a, "sa\n", opt);
		rotate(*a, "ra\n", opt);
	}
	else if (min == 2)
	{
		rotate(*a, "ra\n", opt);
		swap(*a, "sa\n", opt);
		reverse_rotate(a, "rra\n", opt);
		swap(*a, "sa\n", opt);
		rotate(*a, "ra\n", opt);
	}
	if ((*a)->content > (*a)->next->content)
		swap(*a, "sa\n", opt);
	reverse_rotate(a, "rra\n", opt);
}

void	sort_three_full_list(t_stack **a, int len, t_list **opt)
{
	int	size;

	size = ft_lstsize(*a);
	if (size <= 3)
		sort_three(a, opt);
	else if (len <= 1 || size <= 1)
		return ;
	else if (len == 2)
	{
		if ((*a)->content > (*a)->next->content)
			swap(*a, "sa\n", opt);
		return ;
	}
	else
		custom_sort_three(a, len, opt);
}
