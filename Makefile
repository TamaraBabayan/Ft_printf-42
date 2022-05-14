NAME	= libftprintf.a
SRCS	= $(shell find "." -name "*.c")
OBJS	= ${SRCS:.c=.o}
CC		= gcc
LIB		= ar rcs
CFLAGS	= -Wall -Werror -Wextra -I.
RM		= rm -f

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	${LIB} $(NAME) ${OBJS}

all : $(NAME)

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
