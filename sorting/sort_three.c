/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:58:59 by osallak           #+#    #+#             */
/*   Updated: 2022/02/24 19:42:17 by osallak          ###   ########.fr       */
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
		rra(a);
		sa(a);
	}
	else if (first > second && second < third && first < third)
		sa(a);
	else if (first < second && second > third && third < first)
		rra(a);
	else if (first > second && second > third)
	{
		ra(a);
		sa(a);
	}
	else
		ra(a);
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
			sa(a);
			return ;
		}
		return ;
	}
	else
		sort(a);
}
