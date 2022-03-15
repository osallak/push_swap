/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimise.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 02:05:53 by osallak           #+#    #+#             */
/*   Updated: 2022/03/14 17:36:22 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	push_up_rotated_b(t_stack **b, int r)
{
	int	size;

	size = ft_lstsize(*b);
	if (r > size / 2)
		while (size - r++ > 0)
			rotate(*b, "rb\n");
	else
		while (r--)
			reverse_rotate(b, "rrb\n");
}

void	push_up_rotated_a(t_stack **a, int ra)
{
	int	size;

	size = ft_lstsize(*a);
	if (ra > size / 2)
		while (size - ra++ > 0)
			rotate(*a, "ra\n");
	else
		while (ra--)
			reverse_rotate(a, "rra\n");
}
