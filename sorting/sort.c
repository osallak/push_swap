/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 01:06:08 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 11:35:44 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

static int	selection_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr[i / 2]);
}

int	virtual_sort(t_stack **stack, int len)
{
	int		index;
	int		*vrt_stack;
	t_stack	*tmp;
	int		pivot;

	tmp = *stack;
	vrt_stack = (int *)ft_allocate(len, 4);
	index = 0;
	while (tmp && index < len)
	{
		vrt_stack[index++] = (tmp)->content;
		(tmp) = (tmp)->next;
	}
	pivot = selection_sort(vrt_stack, len);
	index = 0;
	free(vrt_stack);
	return (pivot);
}

void	sort_a(t_stack **a, t_stack **b, int len, t_list **opt)
{
	int		pivot;
	int		pb;
	int		ra;
	int		i;

	pb = 0;
	ra = 0;
	i = 0;
	if (len <= 3)
		sort_three_full_list(a, len, opt);
	if (len <= 3)
		return ;
	pivot = virtual_sort(a, len);
	while (i++ < len)
	{
		if ((*a)->content < pivot && ++pb)
			push(a, b, "pb\n", opt);
		else if ((*a)->content >= pivot && ++ra)
			rotate(*a, "ra\n", opt);
	}
	push_up_rotated_a(a, ra, opt);
	sort_a(a, b, (len - pb), opt);
	sort_b(a, b, pb, opt);
	while (pb-- > 0)
		push(b, a, "pa\n", opt);
}

void	sort_b(t_stack **a, t_stack **b, int len, t_list **opt)
{
	int		pivot;
	int		pa;
	int		rb;
	int		i;

	pa = 0;
	rb = 0;
	i = 0;
	if (len <= 3)
		inverse_sort_three(b, len, opt);
	if (len <= 3)
		return ;
	pivot = virtual_sort(b, len);
	while (*b && i++ < len)
	{
		if ((*b)->content > pivot && ++pa)
			push(b, a, "pa\n", opt);
		else if ((*b)->content <= pivot && ++rb)
			rotate(*b, "rb\n", opt);
	}
	sort_a(a, b, pa, opt);
	push_up_rotated_b(b, rb, opt);
	sort_b(a, b, (len - pa), opt);
	while (pa-- > 0)
		push(a, b, "pb\n", opt);
}
