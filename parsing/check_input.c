/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:52:00 by osallak           #+#    #+#             */
/*   Updated: 2022/03/14 20:47:39 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	check_input(char *input)
{
	int	i;

	i = -1;
	while (input[++i])
	{
		if (!ft_isdigit(input[i]) && input[i] != ' '\
			&& input[i] != '+' && input[i] != '-')
		{
			free(input);
			ft_print_error("Syntax Error");
		}
	}
	i = -1;
	while (input[++i])
	{
		if (input[i] == '+' || input[i] == '-')
		{
			if (!ft_isdigit(input[i + 1]) || input[i - 1] != ' ')
			{
				free(input);
				ft_print_error("Syntax Error");
			}
		}
	}
}
