/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:23:09 by osallak           #+#    #+#             */
/*   Updated: 2022/02/27 20:51:59 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

t_stack	*init_list(t_args args)
{
	t_stack	*node;
	int		i;

	i = 0;
	node = NULL;
	node = ft_add_new(args.args[i++]);
	while (i < args.size)
		add_back(&node, ft_add_new(args.args[i++]));
	return (node);
}
