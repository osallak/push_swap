/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:50:43 by osallak           #+#    #+#             */
/*   Updated: 2022/02/17 19:55:10 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	*ft_allocate(int bytes, int block_size)
{
	void	*ret;

	ret = malloc(bytes * block_size);
	if (!ret)
	{
		write (1, "Cannot allocate memory\n", 23);
		exit(1);
	}
	return (ret);
}
