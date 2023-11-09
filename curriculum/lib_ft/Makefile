CC = cc

SRC = ft_isalpha.c\
ft_isalnum.c\
ft_isdigit.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strncmp.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_atoi.c

OBJ = ${SRC:.c=.o}

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

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