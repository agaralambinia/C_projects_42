CC = cc

SRC = ft_isalpha.c
ft_isalnum.c
ft_isdigit.c
ft_isascii.c
ft_isprint.c
ft_strlen.c

OBJ = ${SRC:.c=.o}

H_DIR = . как указать hdir?

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${H_DIR}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re