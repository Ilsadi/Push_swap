# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRCS = parsing/check_args.c \
	parsing/parse_args.c \
	split_args.c 

OBJS = ${SRCS:.c=.o}

NAME = push_swap

INC = push_swap.h

all : ${NAME}

%.o : %.c ${INC}
	@cc ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} ${INC} 
	@ar rc ${NAME} ${OBJS} 

clean:
	@rm -f ${OBJS} 

fclean: clean
	@rm -f ${NAME}

re: fclean all

