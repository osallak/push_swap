/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:58:29 by osallak           #+#    #+#             */
/*   Updated: 2022/03/12 23:30:46 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n <= 9)
		ft_putchar_fd((n + 48), fd);
	else if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd(((n % 10) + 48), fd);
	}
}

void	display(t_stack *lst, char *s)
{
	if (!lst)
	{
		write(1, "Empty list\n", 11);
		return ;
	}
	write (1, s, ft_strlen(s));
	while (lst)
	{
		ft_putnbr_fd(lst->content, 1);
		write (1, " ", 1);
		lst = lst->next;
	}
	write (1, "\n", 1);
}
