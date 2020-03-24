##
## EPITECH PROJECT, 2019
## PSU_my_printf_bootstrap_2019
## File description:
## Makefile
##

SRC		=	main.c 			\
			open_read.c 	\
			get_filename.c 	\
			display.c 		\


OBJ		= $(SRC:.c=.o)

CC 		= gcc

LIB		= make -C ./lib/my

RM		= rm -f

NAME	= tetris

CFLAGS	= -g3

all: 		$(NAME)

$(NAME):
		$(LIB)
		$(CC) -o $(NAME) $(SRC) $(CFLAGS) ./lib/libmy.a

tests_run:
		$(LIB)
		gcc -o units tests/*.c ./src/*.c §(CFLAGS) --coverage -lcriterion ./lib/libmy.a
		./units

clean:
		$(LIB) clean
		$(RM) $(OBJ)
		$(RM) *.gcda
		$(RM) *.gcno

fclean: clean
		$(RM) $(NAME)
		$(RM) units
		$(LIB) fclean

re:		fclean all