SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCS	= includes
OBJS	= ${SRCS:.c=.o}
FLAGS	= -Wall -Wextra -Werror
GCC		= gcc
AR		= ar rc
RM		= rm -rf
NAME	= libft.a
LIBR	= ranlib

.c.o:
	${GCC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCS} 

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
