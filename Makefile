##
## EPITECH PROJECT, 2020
## Sample Makefile
## File description:
## A sample of a Makefile to start Epitech
##

CC			=	gcc

CFLAGS 		=	-W -Wall -Wextra -pedantic -I./include

LFLAGS 		=	-L./lib -lmy -lnumformat

SRC 		=	main.c \
				do_op.c \
				calculations.c \
				my_get_sign.c

SRC_TEST 	= 	tests/numformat/test_fill_of_zero.c \
				tests/numformat/test_get_global_sign.c \
				tests/numformat/test_get_lowest.c \
				tests/numformat/test_get_sign.c \
				tests/numformat/test_remove_sign.c

TEST_FLAGS 	= 	-g3 -lcriterion --coverage

OBJ 		=	$(SRC:.c=.o)

OBJ_TEST 	= 	$(SRC_TEST:.c=.o)

EXEC 		=	calc

EXEC_TEST 	= 	calc_test

all:		$(EXEC)

$(EXEC):	build_lib build

build_lib:
	make -C ./lib/

build: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(LFLAGS) -o $(EXEC)

clean:
	rm -f $(OBJ) $(LIB_OBJ)

fclean:		clean
	rm -f $(EXEC)

test:	clean_test build_lib test_run

clean_test:
	rm -rf $(OBJ_TEST) $(EXEC_TEST)

test_run: $(OBJ_TEST)
	$(CC) $(OBJ_TEST) $(CFLAGS) $(TEST_FLAGS) $(LFLAGS) -o $(EXEC_TEST)

re:			fclean all

.PHONY:		all build clean fclean re
