/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:24 by osallak           #+#    #+#             */
/*   Updated: 2022/03/16 20:52:36 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	input_length(char **input)
{
	int	len;

	len = 0;
	while (input[len])
		len++;
	return (len);
}

static void	ft_free(char **input, int i)
{
	while (input[i])
		free(input[i++]);
	free(input);
}

t_args	convert_input(char **input)
{
	int			*args;
	t_args		ret;
	int			len;
	long long	num;

	ret.size = input_length(input);
	len = ret.size;
	args = (int *)ft_allocate(len, sizeof(int));
	len = 0;
	while (input[len])
	{
		num = ft_atoi(input[len]);
		if (num > INT_MAX || num < INT_MIN)
		{
			ft_free(input, len);
			ft_print_error("Error : Number out of range");
		}
		args[len] = (int)num;
		free(input[len]);
		len++;
	}
	ret.args = args;
	free(input);
	return (ret);
}
