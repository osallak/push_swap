/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:57:11 by osallak           #+#    #+#             */
/*   Updated: 2022/02/21 19:42:57 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

char	**ft_split(char *s, char c)
{
	size_t		len;
	char		**split;
	size_t		i;
	char		*tmp;

	tmp = s;
	i = 0;
	if (!s)
		return (NULL);
	split = (char **)ft_allocate((ft_count(s, c) + 1), sizeof(*split));
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len != 0)
			split[i++] = ft_substr(s, 0, len);
		if (len != 0 && !split[i - 1])
			return (free(s), free_tab(split), NULL);
		s += len;
	}
	split[i] = NULL;
	return (free(tmp), split);
}
