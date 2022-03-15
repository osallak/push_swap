/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:08:30 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 10:42:58 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_stack	*ft_add_new(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		ft_print_error("Cannot allocate memory");
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*lstnew(char *move)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		ft_print_error("Cannot allocate memory");
	new->move = move;
	new->next = NULL;
	return (new);
}
