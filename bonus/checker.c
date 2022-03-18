/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:52:04 by osallak           #+#    #+#             */
/*   Updated: 2022/03/18 01:08:06 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"
#include<readline/readline.h>

void	compare(char *move, t_stack **a, t_stack **b)
{
	if (ft_strcmp(move, "sa"))
		swap_bonus(*a);
	else if (ft_strcmp(move, "sb"))
		swap_bonus(*b);
	else if (ft_strcmp(move, "ss"))
		ss_bonus(*a, *b);
	else if (ft_strcmp(move, "ra"))
		rotate_bonus(*a);
	else if (ft_strcmp(move, "rb"))
		rotate_bonus(*b);
	else if (ft_strcmp(move, "rr"))
		rr_bonus(*a, *b);
	else if (ft_strcmp(move, "rra"))
		reverse_rotate_bonus(a);
	else if (ft_strcmp(move, "rrb"))
		reverse_rotate_bonus(b);
	else if (ft_strcmp(move, "rrr"))
		rrr_bonus(a, b);
	else if (ft_strcmp(move, "pa"))
		push_bonus(b, a);
	else if (ft_strcmp(move, "pb"))
		push_bonus(a, b);
	else
		return (ft_free(*a, NULL), ft_print_error("Error"));
	free(move);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*move;

	a = init_list(check_double(convert_input(parser(ac, av))));
	while (true)
	{
		move = get_next_line(0);
		if (!move || !*move || *move == '\n')
			break ;
		compare(move, &a, &b);
	}
	if (is_sorted(a))
		write(1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	if (b)
		ft_free(b, NULL);
	ft_free(a, NULL);
}
