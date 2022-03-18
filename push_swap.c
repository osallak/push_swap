/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:58:05 by osallak           #+#    #+#             */
/*   Updated: 2022/03/17 22:30:02 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	reduce_instructions(t_list **opt)
{
	check_swap(opt);
	check_push(opt);
	check_r_a(opt);
	check_r_b(opt);
	check_rrr(opt);
	check_ss(opt);
	check_rr(opt);
	display_moves(*opt);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_list	*opt;
	int		size;

	a = init_list(check_double(convert_input(parser(ac, av))));
	b = NULL;
	opt = NULL;
	if (is_sorted(a))
		return (ft_free(a, opt), 0);
	size = ft_lstsize(a);
	if (size <= 5)
	{
		if (size <= 3)
			sort_three(&a, &opt);
		else
			sort_five(&a, &b, &opt);
		display_moves(opt);
		ft_free(a, opt);
		return (0);
	}
	sort_a(&a, &b, size, &opt);
	reduce_instructions(&opt);
	ft_free(a, opt);
}
