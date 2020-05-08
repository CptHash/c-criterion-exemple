##
## PROJECT, 2020
## Criterion
## File description:
## Makefile
##

CC		=	g++

SRC		=	src/Main.cpp			\
			src/Demo.cpp

OBJ		=	$(SRC:.cpp=.o)

NAME	=	bin

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

tests_run:
	make -C tests

coverage:
	gcovr --exclude tests/

clean:
	rm -f $(OBJ)
	rm -f src/*.gcda src/*.gcno

fclean:	clean
	rm -f $(NAME)
	make -C tests/ fclean

re:	fclean all

.PHONY:	all clean fclean re
