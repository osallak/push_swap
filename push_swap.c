/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:58:05 by osallak           #+#    #+#             */
/*   Updated: 2022/03/16 16:59:25 by osallak          ###   ########.fr       */
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

void	free_stack(t_stack *a)
{
	t_stack	*tmp;

	if (!a)
		return ;
	while (a)
	{
		tmp = a;
		free(tmp);
		a = a->next;
	}
}

void	free_list(t_list *opt)
{
	t_list	*tmp;

	if (!opt)
		return ;
	while (opt)
	{
		tmp = opt;
		free_node(tmp);
		opt = opt->next;
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_list	*opt;
	int		size;

	a = init_list(check_double(convert_input(parser(ac, av))));
	size = ft_lstsize(a);
	b = NULL;
	opt = NULL;
	if (size <= 5)
	{
		if (size <= 3)
			sort_three(&a, &opt);
		else
			sort_five(&a, &b, &opt);
		display_moves(opt);
		return (0);
	}
	sort_a(&a, &b, size, &opt);
	reduce_instructions(&opt);
	free_stack(a);
	free_list(opt);
}
