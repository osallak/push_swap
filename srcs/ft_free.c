/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:31:14 by osallak           #+#    #+#             */
/*   Updated: 2022/03/17 16:32:00 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_free(t_stack *a, t_list *opt)
{
	t_stack	*tmp;
	t_list	*tmp2;

	if (a)
	{
		while (a)
		{
			tmp = a;
			free(tmp);
			a = a->next;
		}
	}
	if (opt)
	{	
		while (opt)
		{
			tmp2 = opt;
			free_node(tmp2);
			opt = opt->next;
		}
	}
}
