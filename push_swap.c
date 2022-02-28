/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:58:05 by osallak           #+#    #+#             */
/*   Updated: 2022/03/01 00:09:12 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static char	**parser(int ac, char **av)
{
	char	*joined;

	if (ac == 1)
		ft_print_error("Invalid number of arguments");
	joined = join_args(av);
	check_input(joined);
	return (ft_split(joined, ' '));
}

int	main(int ac, char **av)
{
	t_stack	*a;
	int		size;

	a = init_list(check_double(convert_input(parser(ac, av))));
	size = ft_lstsize(a);
	if (size == 3)
		sort_three(a);
	// display(a);
}
