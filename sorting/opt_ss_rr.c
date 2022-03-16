/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_ss_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:57:11 by osallak           #+#    #+#             */
/*   Updated: 2022/03/16 15:58:00 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_ss(t_list **opt)
{
	int		i;
	t_list	*node;

	node = *opt;
	i = 0;
	while (node && node->next)
	{
		if (ft_strcmp(node->move, "sa\n")
			&& ft_strcmp(node->next->move, "sb\n"))
		{
			opt_rrr(opt, &i, "ss\n");
			node = *opt;
			continue ;
		}
		else if (ft_strcmp(node->move, "sb\n")
			&& ft_strcmp(node->next->move, "sa\n"))
		{
			opt_rrr(opt, &i, "ss\n");
			node = *opt;
			continue ;
		}
		node = node->next;
		i++;
	}
}

void	check_rr(t_list **opt)
{
	int		i;
	t_list	*node;

	node = *opt;
	i = 0;
	while (node && node->next)
	{
		if (ft_strcmp(node->move, "ra\n")
			&& ft_strcmp(node->next->move, "rb\n"))
		{
			opt_rrr(opt, &i, "rr\n");
			node = *opt;
			continue ;
		}
		else if (ft_strcmp(node->move, "rb\n")
			&& ft_strcmp(node->next->move, "ra\n"))
		{
			opt_rrr(opt, &i, "rr\n");
			node = *opt;
			continue ;
		}
		node = node->next;
		i++;
	}
}
