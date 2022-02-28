/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:34:42 by osallak           #+#    #+#             */
/*   Updated: 2022/02/28 14:57:38 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	add_front(t_stack **head, t_stack *new)
{
	if (!*head)
	{
		*head = new;
		return ;
	}
	new->next = *head;
	*head = new;
}
