/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:38:21 by messalih          #+#    #+#             */
/*   Updated: 2022/03/16 20:27:10 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# define BUFFER_SIZE 1

int		ft_strlen(char *str);
int		ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
