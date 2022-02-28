/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:58:59 by osallak           #+#    #+#             */
/*   Updated: 2022/03/01 00:06:22 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_three(t_stack *a)
{
	int	min;
	int	max;

	min = get_min(a);
	max = get_max(a);
	printf("Min : <%d> Max : <%d>\n", min, max);
	if (max == 2 && min == 0)
		return ;
	if (min == 0 && max == 1)
	{
		reverse_rotate(&a, "rra\n");
		swap(a, "sa\n");
	}
	else if (max == 2)
		swap(a, "sa\n");
	else if (min == 2 && max == 1)
		reverse_rotate(&a, "rra\n");
	else if (min == 2 && max == 0)
	{
		swap(a, "sa\n");
		reverse_rotate(&a, "rra\n");
	}
	else
		rotate(a, "ra\n");
}
