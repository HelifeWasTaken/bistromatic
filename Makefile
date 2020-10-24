##
## EPITECH PROJECT, 2020
## Sample Makefile
## File description:
## A sample of a Makefile to start Epitech
##

CC			=	gcc

CFLAGS 		=	-W -Wall -Wextra -pedantic -I./include

LFLAGS 		=	-L./lib -lmy

SRC 		=   main.c \
				\
				source/operations/main.c \
				source/operations/do_op.c \
				source/operations/calculations.c \
				source/operations/my_get_sign.c \
				source/operations/my_add.c \
				source/operations/my_sub.c \
				source/operations/my_mul.c \
				\
				source/numformat/fill_of_zero.c \
				source/numformat/get_global_sign.c \
				source/numformat/is_first_smaller.c \
				source/numformat/get_sign.c \
				source/numformat/remove_sign.c \
				source/numformat/str_cleaner.c

SRC_TEST 	= 	source/operations/my_add.c \
				source/operations/my_sub.c \
				source/operations/my_mul.c \
				\
				source/numformat/fill_of_zero.c \
				source/numformat/get_global_sign.c \
				source/numformat/is_first_smaller.c \
				source/numformat/get_sign.c \
				source/numformat/remove_sign.c \
				source/numformat/str_cleaner.c \
				source/numformat/transform_base.c \
				source/numformat/is_zero.c \
				source/numformat/powten.c \
				source/numformat/check_arithmetic_logic.c \
				source/numformat/error_check.c \
				source/numformat/is_an_operator.c \
				\
				tests/numformat/test_fill_of_zero.c \
				tests/numformat/test_get_global_sign.c \
				tests/numformat/test_is_first_smaller.c \
				tests/numformat/test_get_sign.c \
				tests/numformat/test_remove_sign.c \
				tests/numformat/test_str_cleaner.c \
				tests/numformat/test_putnbr_base.c \
				tests/numformat/test_powten.c \
				tests/numformat/test_error_handling.c \
				tests/numformat/test_is_zero.c \
				\
				tests/numformat/test_transform_base.c \
				tests/test_ops/test_sub.c \
				tests/test_ops/test_add.c \
				tests/test_ops/test_mul.c

TEST_FLAGS 	= 	-l criterion --coverage

OBJ 		=	$(SRC:.c=.o)

EXEC 		=	calc

EXEC_TEST 	= 	calc_test

all:		$(EXEC)

$(EXEC):	build_lib build

build_lib:
	make -C ./lib/my

build: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(LFLAGS) -o $(EXEC)

clean:
	rm -f $(OBJ) $(LIB_OBJ)

fclean:		clean clean_test
	rm -f $(EXEC)

tests_run:	clean_test build_lib
	$(CC) $(SRC_TEST) $(CFLAGS) $(TEST_FLAGS) $(LFLAGS) -o $(EXEC_TEST)
	./$(EXEC_TEST) --verbose

clean_test:
	rm -rf $(EXEC_TEST)

re:			fclean all

.PHONY:		all build clean fclean re tests_run
