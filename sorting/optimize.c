/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:41:45 by osallak           #+#    #+#             */
/*   Updated: 2022/03/16 15:58:04 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	check_swap(t_list **opt)
{
	int		i;
	t_list	*node;

	if (!*opt || !(*opt)->next)
		return ;
	node = *opt;
	i = 0;
	while (node && node->next)
	{
		if (ft_strcmp(node->move, "sa\n") && ft_strcmp(node->next->move, "sa\n"))
		{
			delete_node(opt, &i);
			node = *opt;
			continue ;
		}
		else if (ft_strcmp(node->move, "sb\n")
			&& ft_strcmp(node->next->move, "sb\n"))
		{
			delete_node(opt, &i);
			node = *opt;
			continue ;
		}
		node = node->next;
		i++;
	}
}

void	check_push(t_list **opt)
{
	int		i;
	t_list	*node;

	if (!*opt || !(*opt)->next)
		return ;
	node = *opt;
	i = 0;
	while (node && node->next)
	{
		if (ft_strcmp(node->move, "pa\n") && ft_strcmp(node->next->move, "pb\n"))
		{
			delete_node(opt, &i);
			node = *opt;
			continue ;
		}
		else if (ft_strcmp(node->move, "pb\n")
			&& ft_strcmp(node->next->move, "pa\n"))
		{
			delete_node(opt, &i);
			node = *opt;
			continue ;
		}
		node = node->next;
		i++;
	}
}

void	check_r_a(t_list **opt)
{
	int		i;
	t_list	*node;

	if (!*opt || !(*opt)->next)
		return ;
	node = *opt;
	i = 0;
	while (node && node->next)
	{
		if (ft_strcmp(node->move, "ra\n") && ft_strcmp(node->next->move, "rra\n"))
		{
			delete_node(opt, &i);
			node = *opt;
			continue ;
		}
		else if (ft_strcmp(node->move, "rra\n")
			&& ft_strcmp(node->next->move, "ra\n"))
		{
			delete_node(opt, &i);
			node = *opt;
			continue ;
		}
		node = node->next;
		i++;
	}
}

void	check_r_b(t_list **opt)
{
	int		i;
	t_list	*node;

	node = *opt;
	i = 0;
	while (node && node->next)
	{
		if (ft_strcmp(node->move, "rb\n") && ft_strcmp(node->next->move, "rrb\n"))
		{
			delete_node(opt, &i);
			node = *opt;
			continue ;
		}
		else if (ft_strcmp(node->move, "rrb\n")
			&& ft_strcmp(node->next->move, "rb\n"))
		{
			delete_node(opt, &i);
			node = *opt;
			continue ;
		}
		node = node->next;
		i++;
	}
}

void	check_rrr(t_list **opt)
{
	int		i;
	t_list	*node;

	node = *opt;
	i = 0;
	while (node && node->next)
	{
		if (ft_strcmp(node->move, "rra\n")
			&& ft_strcmp(node->next->move, "rrb\n"))
		{
			opt_rrr(opt, &i, "rrr\n");
			node = *opt;
			continue ;
		}
		else if (ft_strcmp(node->move, "rrb\n")
			&& ft_strcmp(node->next->move, "rra\n"))
		{
			opt_rrr(opt, &i, "rrr\n");
			node = *opt;
			continue ;
		}
		node = node->next;
		i++;
	}
}
