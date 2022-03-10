/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:52:04 by osallak           #+#    #+#             */
/*   Updated: 2022/03/10 01:41:19 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"
#include<readline/readline.h>

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*s;

	a = init_list(check_double(convert_input(parser(ac, av))));
	while (true)
	{
		s = readline(NULL);
	}
}
