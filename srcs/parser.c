/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:30:13 by osallak           #+#    #+#             */
/*   Updated: 2022/03/19 10:15:17 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

char	**parser(int ac, char **av)
{
	char	*joined;

	if (ac == 1)
		ft_print_error(NULL);
	joined = join_args(av);
	check_input(joined);
	return (ft_split(joined, ' '));
}
