##
## EPITECH PROJECT, 2020
## Sample Makefile
## File description:
## A sample of a Makefile to start Epitech
##

CC			=	gcc

CFLAGS 		=	-W -Wall -Wextra -pedantic -I./include

LFLAGS 		=	-L./lib -lmy

MAIN 		=   main.c

SRC 		=	eval_expr_prepare.c \
				source/operations/do_op.c \
				source/operations/my_add.c \
				source/operations/my_sub.c \
				source/operations/my_div.c \
				source/operations/my_mod.c \
				source/operations/my_mul.c \
				source/operations/my_pow_int.c \
				\
				source/numformat/fill_of_zero.c \
				source/numformat/get_global_sign.c \
				source/numformat/is_first_smaller.c \
				source/numformat/is_first_smaller_unsigned.c \
				source/numformat/is_first_greater.c \
				source/numformat/is_first_greater_unsigned.c \
				source/numformat/are_equals.c \
				source/numformat/get_sign.c \
				source/numformat/remove_trailing_zeroes.c \
				source/numformat/remove_leading_zeroes.c \
				source/numformat/remove_sign.c \
				source/numformat/invert_sign.c \
				source/numformat/str_cleaner.c \
				source/numformat/is_zero.c \
				source/numformat/powten.c \
				source/numformat/check_arithmetic_logic.c \
				source/numformat/is_an_operator.c \
				source/numformat/transform_base.c \
				source/numformat/check_arithmetic_expression.c \
				source/numformat/check_multiple_definition.c \
				source/numformat/back_to_base.c \
				source/numformat/base_to_10.c \
				source/numformat/get_new_base.c \
				\
				source/evalexpr/eval_expr.c \
				source/evalexpr/expr.c \
				source/evalexpr/parser_brackets.c \
				source/evalexpr/parser.c \
				source/evalexpr/tokens.c

SRC_TEST 	= 	tests/test_general.c \
				tests/numformat/test_fill_of_zero.c \
				tests/numformat/test_get_global_sign.c \
				tests/numformat/test_is_first_smaller.c \
				tests/numformat/test_is_first_greater.c \
				tests/numformat/test_get_sign.c \
				tests/numformat/test_invert_sign.c \
				tests/numformat/test_remove_sign.c \
				tests/numformat/test_str_cleaner.c \
				tests/numformat/test_putnbr_base.c \
				tests/numformat/test_powten.c \
				tests/numformat/test_error_handling.c \
				tests/numformat/test_is_zero.c \
				tests/numformat/test_transform_base.c \
				tests/numformat/test_are_equals.c \
				tests/numformat/test_remove_leading_zeros.c \
				tests/numformat/test_back_to_base.c \
				tests/numformat/test_base_to_ten.c \
				\
				tests/test_ops/test_sub.c \
				tests/test_ops/test_add.c \
				tests/test_ops/test_mul.c \
				tests/test_ops/test_mod.c \
				tests/test_ops/test_div.c \
				tests/test_ops/test_op_parser.c \
				\
				tests/evalexpr/test_eval_expr.c \
				tests/evalexpr/test_expr.c \
				tests/evalexpr/test_tokens.c

TEST_FLAGS 	= 	-l criterion --coverage

EXEC 		=	calc

EXEC_TEST 	= 	calc_test

all:		$(EXEC)

$(EXEC):	build_lib build

build_lib:
	make -C ./lib/my

build:
	$(CC) $(MAIN) $(SRC) $(CFLAGS) $(LFLAGS) -o $(EXEC)

clean:
	rm -f *~ \#*\#*

fclean:		clean clean_test
	rm -f $(EXEC)

tests_run:	clean_test build_lib
	$(CC) $(SRC_TEST) $(SRC) $(CFLAGS) $(TEST_FLAGS) $(LFLAGS) -o $(EXEC_TEST)
	./$(EXEC_TEST) --verbose

clean_test:
	rm -rf $(EXEC_TEST) $(OBJ_TEST) *.gc*

re:			fclean all

.PHONY:		all $(EXEC) build_lib build clean fclean re tests_run clean_test
