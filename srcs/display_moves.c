/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:06:19 by osallak           #+#    #+#             */
/*   Updated: 2022/03/16 17:19:09 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static void	print(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	display_moves(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = lst;
	while (tmp)
	{
		print(tmp->move);
		tmp = tmp->next;
	}
}
