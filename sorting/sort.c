/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 01:06:08 by osallak           #+#    #+#             */
/*   Updated: 2022/03/10 22:00:29 by osallak          ###   ########.fr       */
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
	tmp = arr[i / 2];
	return (tmp);
}

int	virtual_sort(t_stack **stack)
{
	int		len;
	int		index;
	int		*vrt_stack;
	t_stack	*tmp;
	int		pivot;

	tmp = *stack;
	len = ft_lstsize(tmp);
	vrt_stack = (int *)ft_allocate(len, 4);
	index = 0;
	while (tmp)
	{
		vrt_stack[index++] = (tmp)->content;
		(tmp) = (tmp)->next;
	}
	pivot = selection_sort(vrt_stack, len);
	index = 0;
	free(vrt_stack);
	return (pivot);
}

void	sort_a(t_stack **a, t_stack **b, int len)
{
	int		pivot;
	int		pb;
	int		ra;
	int		i;

	if (len <= 3)
		sort_three(a);
	else
	{
		pivot = virtual_sort(a);
		pb = 0;
		ra = 0;
		i = 0;
		while (i < len)
		{
			if ((*a)->content < pivot)
			{
				push(a, b, "pb\n");
				pb++;
			}
			else
			{
				rotate(*a, "ra\n");
				ra++;
			}
			i++;
		}
		sort_a(a, b, (len - pb));
		sort_b(a, b, pb);
		while (pb--)
			push(b, a, "pa\n");
	}
}

void	sort_b(t_stack **a, t_stack **b, int len)
{
	int		pivot;
	int		pa;
	int		rb;
	int		i;

	if (len <= 3)
		inverse_sort_three(a, len);
	else
	{
		pivot = virtual_sort(a);
		pa = 0;
		rb = 0;
		i = 0;
		while (a && i++ < len)
		{
			if ((*a)->content < pivot)
			{
				push(a, b, "pa\n");
				pa++;
			}
			else
			{
				rotate(*a, "rb\n");
				rb++;
			}
		}
		sort_a(a, b, pa);
		sort_b(a, b, (len - pa));
		while (pa--)
			push(b, a, "pa\n");
	}
}