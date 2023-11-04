SRC = srcs/arrow.c srcs/basefunc.c srcs/main.c srcs/operator.c

OBJ = ${SRC:.c=.o}

H_DIR = inc

NAME = do-op

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${H_DIR}

${NAME}: ${OBJ}
	$(CC) -o $@ $^ $(CFLAGS)

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re