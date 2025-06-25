# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRCS = parsing/check_args.c \
	parsing/parse_args.c \
	parsing/split_args.c \
	commands/push.c \
	commands/rotate.c \
	commands/rev_rotate.c \
	commands/swap.c \
	sort/radix_sort.c \
	sort/specific_sort.c \
	sort/utils_radix_sort.c \
	sort/utils_specific_sort.c \
	push_swap.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIBFT = libft/libft.a

INC = push_swap.h

all: $(NAME)

libft/libft.a:
	@$(MAKE) -C libft

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@make -C libft clean

fclean: clean
	@rm -f $(NAME)
	@make -C libft fclean

re: fclean all
