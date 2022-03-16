/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:58:05 by osallak           #+#    #+#             */
/*   Updated: 2022/03/16 23:10:06 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

char	**parser(int ac, char **av)
{
	char	*joined;

	if (ac == 1)
		ft_print_error("Invalid number of arguments");
	joined = join_args(av);
	check_input(joined);
	return (ft_split(joined, ' '));
}

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

void	ft_free(t_stack *a, t_list *opt)
{
	t_stack	*tmp;
	t_list	*tmp2;

	if (a)
	{
		while (a)
		{
			tmp = a;
			free(tmp);
			a = a->next;
		}
	}
	if (opt)
	{	
		while (opt)
		{
			tmp2 = opt;
			free_node(tmp2);
			opt = opt->next;
		}
	}
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
