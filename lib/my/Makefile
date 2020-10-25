##
## EPITECH PROJECT, 2020
## Sample Makefile
## File description:
## A sample of a Makefile to start Epitech
##

CC			=	gcc

AR 			= 	ar rc

CFLAGS 		=	-W -Wall -Wextra -pedantic -Werror -I./include

SRC 		=   my_math/my_compute_power_rec.c \
				my_math/my_compute_square_root.c \
				my_math/my_find_prime_sup.c \
				my_math/my_is_prime.c \
				my_math/my_putnbr_base.c \
				\
				my_stdlib/my_bzero.c \
				my_stdlib/my_calloc.c \
				my_stdlib/my_getnbr.c \
				my_stdlib/my_memset.c \
				my_stdlib/my_pointer_swap.c \
				my_stdlib/my_sort_int_array.c \
				my_stdlib/my_strdup.c \
				my_stdlib/my_str_to_word_array.c \
				my_stdlib/my_swap.c \
				\
				my_stdio/my_putstr_err.c \
				my_stdio/my_putchar.c \
				my_stdio/my_putstr.c \
				my_stdio/my_put_nbr.c \
				\
				my_str/concat_params.c \
				my_str/is_capital_letter.c \
				my_str/is_lowercase_letter.c \
				my_str/is_an_alpha_letter.c \
				my_str/is_num_letter.c \
				my_str/is_printable.c \
				my_str/is_char_alphanum.c \
				my_str/my_len_str_array.c \
				my_str/my_put_in_str.c \
				my_str/my_revstr.c \
				my_str/my_showstr.c \
				my_str/my_show_word_array.c \
				my_str/my_strcapitalize.c \
				my_str/my_strcat.c \
				my_str/my_strcmp.c \
				my_str/my_strcpy.c \
				my_str/my_strlen.c \
				my_str/my_strncat.c \
				my_str/my_strncmp.c \
				my_str/my_strncpy.c \
				my_str/my_strstr.c \
				my_str/my_word_count.c \
				my_str/print_char_in_hex.c

OBJ 		=	$(SRC:.c=.o)

NAME 		=	libmy.a

all:		$(NAME) copy

$(NAME):	build_lib

build_lib: 	$(OBJ)
	$(AR) $(NAME) $(OBJ)

copy:
	cp $(NAME) ../
	mkdir -p ../../include
	cp include/*.h ../../include

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME) a.out

re:			fclean all

.PHONY:		all build_lib copy clean fclean re
