/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:58:59 by osallak           #+#    #+#             */
/*   Updated: 2022/02/27 20:56:56 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

static void	sort(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->content;
	second = a->next->content;
	third = a->next->next->content;
	if (first < second && second < third)
		return ;
	else if (first < second && second > third && first < third)
	{
		reverse_rotate(&a, "rra\n");
		swap(a, "sa\n");
	}
	else if (first > second && second < third && first < third)
		swap(a, "sa\n");
	else if (first < second && second > third && third < first)
		reverse_rotate(&a, "rra\n");
	else if (first > second && second > third)
	{
		rotate(a, "ra\n");
		swap(a, "sa\n");
	}
	else
		rotate(a, "ra\n");
}

void	sort_three(t_stack *a)
{
	int	size;

	size = ft_lstsize(a);
	if (size == 1)
		return ;
	else if (size == 2)
	{
		if (a->content > a->next->content)
		{
			swap(a, "sa\n");
			return ;
		}
		return ;
	}
	else
		sort(a);
}
