/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:40:18 by osallak           #+#    #+#             */
/*   Updated: 2022/02/17 21:17:12 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	char	*joined;
	int		i;
	int		j;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = ft_allocate(len, 1);
	i = -1;
	while (s1[++i])
		joined[i] = s1[i];
	j = -1;
	while (s2[++j])
		joined[i++] = s2[j];
	return (joined[i] = '\0', joined);
}
