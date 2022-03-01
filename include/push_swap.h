/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:59:21 by osallak           #+#    #+#             */
/*   Updated: 2022/03/01 15:31:14 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_args
{
	int	*args;
	int	size;
}	t_args;

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

int		ft_strlen(char	*s);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_allocate(int bytes, int block_size);
char	*join_args(char **av);
void	ft_print_error(char *s);
void	check_input(char *input);
bool	ft_isdigit(int c);
char	**ft_split(char *s, char c);
char	*ft_substr(char *s, int start, int len);
char	*ft_strdup(char	*s);
t_args	convert_input(char **input);
int		ft_atoi(char *s);
t_args	check_double(t_args args);
void	print(char *message);
//lst functions
t_stack	*ft_add_new(int content);
void	add_back(t_stack **head, t_stack *new);
void	add_front(t_stack **head, t_stack *new);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *stack);
t_stack	*init_list(t_args args);
int	get_max(t_stack *stack);
int	get_min(t_stack *stack);
//moves
void	swap(t_stack *stack, char *move);
void	rotate(t_stack *stack, char *move);
void	rr(t_stack *a, t_stack *b);
void	reverse_rotate(t_stack **a, char *move);
//tmp sources
void	display(t_stack *lst);
//sorting
void	sort_three(t_stack **a);
#endif