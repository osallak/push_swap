NAME = push_swap
NAME_B = checker_bonus
INC = include
SRCS = push_swap.c \
		srcs/ft_strjoin.c\
		srcs/ft_strlen.c\
		srcs/ft_allocate.c\
		srcs/ft_isdigit.c\
		srcs/ft_strdup.c\
		srcs/ft_atoi.c\
		srcs/ft_strcmp.c\
		srcs/is_sorted.c\
		srcs/display_moves.c\
		srcs/ft_free.c\
		srcs/free_node.c\
		srcs/parser.c\
		parsing/ft_print_error.c\
		parsing/args_join.c\
		parsing/check_input.c\
		parsing/ft_split.c\
		parsing/ft_substr.c\
		parsing/convert_input.c\
		parsing/check_double.c\
		lst_srcs/add_back.c\
		lst_srcs/add_front.c\
		lst_srcs/add_new.c\
		lst_srcs/lstsize.c\
		lst_srcs/init_list.c\
		lst_srcs/lst_last.c\
		lst_srcs/get_indexes.c\
		moves/rotate.c\
		moves/swap.c\
		moves/push.c\
		moves/reverse_rotate.c\
		sorting/sort_five.c\
		sorting/inverse_sort.c\
		sorting/sort.c\
		sorting/push_up_rotated.c\
		sorting/optimize.c\
		sorting/opt_utils.c\
		sorting/opt_ss_rr.c

BSRCS = bonus/checker.c\
		bonus/moves_bonus.c\
		bonus/checker_utils.c\
		srcs/ft_strjoin.c\
		srcs/ft_strlen.c\
		srcs/parser.c\
		srcs/free_node.c\
		srcs/ft_allocate.c\
		srcs/ft_isdigit.c\
		srcs/ft_strdup.c\
		srcs/ft_atoi.c\
		srcs/ft_strcmp.c\
		srcs/is_sorted.c\
		srcs/ft_free.c\
		parsing/ft_print_error.c\
		parsing/args_join.c\
		parsing/check_input.c\
		parsing/ft_split.c\
		parsing/ft_substr.c\
		parsing/convert_input.c\
		parsing/check_double.c\
		lst_srcs/add_back.c\
		lst_srcs/add_front.c\
		lst_srcs/add_new.c\
		lst_srcs/lstsize.c\
		lst_srcs/init_list.c\
		lst_srcs/lst_last.c\

RM = rm -rf
CC = cc
OBJS = $(SRCS:%.c=%.o)
B_OBJS = $(BSRCS:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

bonus : $(NAME) $(NAME_B)

$(NAME_B) : $(B_OBJS)
		$(CC) $(CFLAGS) $^ -o $@
%.o : %.c $(INC)/push_swap.h
		$(CC) $(CFLAGS) -c $< -I $(INC) -o $@
clean :
		$(RM) $(OBJS) $(B_OBJS)
fclean : clean
		$(RM) $(NAME) $(NAME_B)
re : fclean all