/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:24 by osallak           #+#    #+#             */
/*   Updated: 2022/02/26 19:55:45 by osallak          ###   ########.fr       */
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

t_args	convert_input(char **input)
{
	int		*args;
	t_args	ret;
	int		len;

	ret.size = input_length(input);
	len = ret.size;
	args = (int *)ft_allocate(len, sizeof(int));
	len = 0;
	while (input[len])
	{
		args[len] = ft_atoi(input[len]);
		free(input[len]);
		len++;
	}
	ret.args = args;
	free(input);
	return (ret);//todo free
}
