/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:54:48 by osallak           #+#    #+#             */
/*   Updated: 2022/02/22 01:13:21 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_atoi(char *s)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	if (s[i] == '+')
		i++;
	else if (s[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (s[i])
		num = num * 10 + (s[i++] - 48);
	return (sign * num);
}
