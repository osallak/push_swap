/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:59:21 by osallak           #+#    #+#             */
/*   Updated: 2022/03/15 10:43:13 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>

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

typedef struct s_list
{
	char			*move;
	struct s_list	*next;
}	t_list;

int			ft_strlen(char	*s);
char		*ft_strjoin(char *s1, char *s2);
void		*ft_allocate(int bytes, int block_size);
char		*join_args(char **av);
void		ft_print_error(char *s);
void		check_input(char *input);
bool		ft_isdigit(int c);
char		**ft_split(char *s, char c);
char		*ft_substr(char *s, int start, int len);
char		*ft_strdup(char	*s);
t_args		convert_input(char **input);
long long	ft_atoi(char *s);
t_args		check_double(t_args args);
void		print(char *message);
bool		is_sorted(t_stack *stack);
char		**parser(int ac, char **av);
//lst functions
t_stack		*ft_add_new(int content);
t_list	*lstnew(char *move);
void		add_back(t_stack **head, t_stack *new);
void		add_front(t_stack **head, t_stack *new);
int			ft_lstsize(t_stack *lst);
t_stack		*ft_lstlast(t_stack *stack);
t_stack		*init_list(t_args args);
int			get_max(t_stack *stack);
int			get_min(t_stack *stack);
//moves
void		swap(t_stack *stack, char *move);
void		rotate(t_stack *stack, char *move);
void		rr(t_stack *a, t_stack *b);
void		reverse_rotate(t_stack **a, char *move);
void		push(t_stack **a, t_stack **b, char *move);
//tmp sources
void		display(t_stack *lst, char *s);
//sorting
void		sort_three(t_stack **a);
void		sort_five(t_stack **a, t_stack **b);
void		inverse_sort_three(t_stack **b, int len);
int			virtual_sort(t_stack **stack, int len);
void		sort_a(t_stack **a, t_stack **b, int len);
void		sort_b(t_stack **a, t_stack **b, int len);
void		sort_three_full_list(t_stack **a, int len);
int			custom_find_min(t_stack *stack, int len);
int			custom_find_max(t_stack *stack, int len);
void		push_up_rotated_b(t_stack **b, int rb);
void		push_up_rotated_a(t_stack **a, int ra);
#endif