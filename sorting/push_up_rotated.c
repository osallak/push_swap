/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_up_rotated.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 02:05:53 by osallak           #+#    #+#             */
/*   Updated: 2022/03/16 13:54:09 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	push_up_rotated_b(t_stack **b, int r, t_list **opt)
{
	int	size;

	size = ft_lstsize(*b);
	if (r > (size / 2))
		while (size - r++ > 0)
			rotate(*b, "rb\n", opt);
	else
		while (r--)
			reverse_rotate(b, "rrb\n", opt);
}

void	push_up_rotated_a(t_stack **a, int ra, t_list **opt)
{
	int	size;

	size = ft_lstsize(*a);
	if (ra > (size / 2))
		while (size - ra++ > 0)
			rotate(*a, "ra\n", opt);
	else
		while (ra--)
			reverse_rotate(a, "rra\n", opt);
}
