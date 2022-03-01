/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:58:59 by osallak           #+#    #+#             */
/*   Updated: 2022/03/01 16:43:09 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

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
