/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:23:09 by osallak           #+#    #+#             */
/*   Updated: 2022/02/26 19:56:49 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

t_stack	*init_list(t_args args)
{
	t_stack	*node;
	t_stack	*tmp;
	int		i;

	i = 0;
	node = ft_add_new(args.args[i++]);
	while (i < args.size)
		add_back(&node, ft_add_new(args.args[i++]));
	return (node);
}
