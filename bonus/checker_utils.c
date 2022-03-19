/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:54:45 by osallak           #+#    #+#             */
/*   Updated: 2022/03/18 21:04:54 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

char	*get_next_line(int fd)
{
	char	line[8000000];
	int		rd;
	char	buff;
	int		i;

	rd = 1;
	i = 0;
	buff = 0;
	line[i] = 0;
	while (rd)
	{
		rd = read(fd, &buff, 1);
		if (rd <= 0)
			break ;
		if (buff == '\n')
			break ;
		line[i++] = buff;
		line[i] = 0;
	}
	if (!*line)
		return (NULL);
	return (ft_strdup(line));
}

void	rr_bonus(t_stack *a, t_stack *b)
{
	rotate_bonus(a);
	rotate_bonus(b);
}

void	push_bonus(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (!a || !*a)
		return ;
	add_front(b, ft_add_new((*a)->content));
	node = (*a)->next;
	free(*a);
	*a = node;
}
