CC = cc

SRC = input_parser.c\
	output.c\
	printf.c

OBJ = ${SRC:.c=.o}

LIBFT_PATH = ./lib_ft

NAME = libftprintf.a

LIBFTNAME = libft.a

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

makelibft:
	make -C $(LIBFT_PATH)
	cp $(LIBFT_PATH)/$(LIBFTNAME) .
	mv $(LIBFTNAME) $(NAME)

${NAME}: makelibft ${OBJ}
	ar rc ${NAME} ${OBJ}

clean:
	rm -f ${OBJ} ${OBJ_BONUS}
	cd $(LIBFT_PATH) && make clean

fclean: clean
	rm -f ${NAME}
	cd $(LIBFT_PATH) && make fclean

re: fclean all

.PHONY: all clean fclean re makelibft