/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:59:39 by osallak           #+#    #+#             */
/*   Updated: 2022/02/21 14:35:42 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

char	*ft_substr(char *s, int start, int len)
{
	char	*dest;
	int		count;

	if (!s)
		return (0);
	if (start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		dest = ft_allocate(((ft_strlen(s) - start) + 1), sizeof(char));
	else
		dest = ft_allocate((len + 1), sizeof(char));
	if (!dest)
		return (NULL);
	count = 0;
	while (s[start] && count < len)
		dest[count++] = s[start++];
	dest[count] = 0;
	return (dest);
}
