##
## PROJECT, 2020
## Testing Makefile
## File description:
## N/a
##

CC		=	g++

SRC		=	../src/Demo.cpp

SRC_T	=	test.cpp

NAME	=	unit_tests

all:	$(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) $(SRC_T) --coverage -lcriterion
	./unit_tests
	mv *.gcda ../src
	mv *.gcno ../src

fclean:
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
