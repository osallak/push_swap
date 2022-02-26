NAME = push_swap
INC = include
SRCS = push_swap.c \
		srcs/ft_strjoin.c\
		srcs/ft_strlen.c\
		srcs/ft_allocate.c\
		srcs/ft_isdigit.c\
		srcs/ft_strdup.c\
		srcs/ft_atoi.c\
		srcs/print_instruction.c\
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
		sorting/sort_three.c\
		moves/rotate.c\
		moves/swap.c\
		moves/reverse_rotate.c\

RM = rm -rf
CC = cc
OBJS = $(SRCS:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

%.o : %.c $(INC)/push_swap.h
		$(CC) $(CFLAGS) -c $< -I $(INC) -o $@

clean :
		$(RM) $(OBJS)
fclean : clean
		$(RM) $(NAME)