/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:58:29 by osallak           #+#    #+#             */
/*   Updated: 2022/02/27 21:00:24 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	display(t_stack *lst)
{
	if (!lst)
	{
		printf("Empty list\n");
		return ;
	}
	while (lst)
	{
		printf("%d ", lst->content);
		lst = lst->next;
	}
}
