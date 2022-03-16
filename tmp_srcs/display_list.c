/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:58:29 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 12:40:16 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	display_moves(t_list *lst)
{
	if (!lst)
	{
		write(1, "Empty list\n", 11);
		return ;
	}
	while (lst)
	{
		printf("%s", lst->move);
		lst = lst->next;
	}
}

void	display(t_stack *stack)
{
	if (!stack)
	{
		write(1, "Empty list\n", 11);
		return ;
	}
	while (stack)
	{
		printf("%d ", stack->content);
		stack = stack->next;
	}
}