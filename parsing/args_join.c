/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_join.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:46:10 by osallak           #+#    #+#             */
/*   Updated: 2022/03/17 14:31:06 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static char	*join(char *s1, char *s2)
{
	int		len;
	char	*ret;
	int		i;

	ret = ft_allocate((ft_strlen(s1) + ft_strlen(s2) + 2), 1);
	i = 0;
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i++] = ' ';
	len = -1;
	while (s2[++len])
		ret[i++] = s2[len];
	ret[i] = 0;
	return (free(s1), ret);
}

static void	check_single_arg(char *arg, char *joined)
{
	int	i;

	i = -1;
	while (arg[++i])
		if (ft_isdigit(arg[i]))
			return ;
	free(joined);
	ft_print_error("Error");
}

char	*join_args(char **argv)
{
	int		i;
	char	*ret;

	i = 1;
	ret = ft_allocate(1, 1);
	*ret = 0;
	while (argv[i])
	{
		if (!*argv[i])
		{
			free(ret);
			ft_print_error("Error");
		}
		check_single_arg(argv[i], ret);
		ret = join(ret, argv[i++]);
	}
	return (ret);
}
