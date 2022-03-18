/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:59:21 by osallak           #+#    #+#             */
/*   Updated: 2022/03/18 01:10:48 by osallak          ###   ########.fr       */
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
bool		is_sorted(t_stack *stack);
char		**parser(int ac, char **av);
bool		ft_strcmp(char *s1, char *s2);
void		ft_free(t_stack *a, t_list *opt);
//lst functions
t_stack		*ft_add_new(int content);
t_list		*lstnew_opt(char *move);
void		add_back(t_stack **head, t_stack *new);
void		add_front(t_stack **head, t_stack *new);
int			ft_lstsize(t_stack *lst);
t_stack		*ft_lstlast(t_stack *stack);
t_stack		*init_list(t_args args);
int			get_max(t_stack *stack);
int			get_min(t_stack *stack);
//moves
void		swap(t_stack *stack, char *move, t_list **opt);
void		rotate(t_stack *stack, char *move, t_list **opt);
void		rr(t_stack *a, t_stack *b, t_list **opt);
void		reverse_rotate(t_stack **a, char *move, t_list **opt);
void		push(t_stack **a, t_stack **b, char *move, t_list **opt);
void		ss(t_stack *a, t_stack *b, t_list **opt);
void		display_moves(t_list *lst);
//sorting
void		sort_three(t_stack **a, t_list **opt);
void		sort_five(t_stack **a, t_stack **b, t_list **opt);
void		inverse_sort_three(t_stack **b, int len, t_list **opt);
int			virtual_sort(t_stack **stack, int len);
void		sort_a(t_stack **a, t_stack **b, int len, t_list **opt);
void		sort_b(t_stack **a, t_stack **b, int len, t_list **opt);
void		sort_three_full_list(t_stack **a, int len, t_list **opt);
int			custom_find_min(t_stack *stack, int len);
int			custom_find_max(t_stack *stack, int len);
void		push_up_rotated_b(t_stack **b, int rb, t_list **opt);
void		push_up_rotated_a(t_stack **a, int ra, t_list **opt);
bool		is_sorted(t_stack *stack);
//optimization
void		optimize(char *move, t_list **head);
void		delete_node(t_list **head, int *i);
void		free_node(t_list *node);
void		lst_add_back_opt(t_list **head, t_list *new);
void		opt_rrr(t_list **head, int *i, char *new_move);
void		check_swap(t_list **opt);
void		check_push(t_list **opt);
void		check_r_a(t_list **opt);
void		check_r_b(t_list **opt);
void		check_rrr(t_list **opt);
void		check_ss(t_list **opt);
void		check_rr(t_list **opt);
//checker srcs
char		*get_next_line(int fd);
void		swap_bonus(t_stack *stack);
void		ss_bonus(t_stack *a, t_stack *b);
void		reverse_rotate_bonus(t_stack **a);
void		rotate_bonus(t_stack *stack);
void		rr_bonus(t_stack *a, t_stack *b);
void		push_bonus(t_stack **a, t_stack **b);
void		rrr_bonus(t_stack **a, t_stack **b);
char		*get_next_line(int fd);

#endif