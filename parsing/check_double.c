/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:17:44 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 13:18:50 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_args	check_double(t_args args)
{
	int	i;
	int	*nums;
	int	j;

	i = 0;
	nums = args.args;
	while (i < args.size)
	{
		j = i + 1;
		while (j < args.size)
		{
			if (nums[i] == nums[j])
			{
				free(nums);
				ft_print_error("Error : duplacated Number");
			}
			j++;
		}
		i++;
	}
	return (args);
}
