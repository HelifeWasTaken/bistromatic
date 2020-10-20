##
## EPITECH PROJECT, 2020
## Sample Makefile
## File description:
## A sample of a Makefile to start Epitech
##

CC			=	gcc

AR 			= 	ar rc

CFLAGS 		=	-W -Wall -Wextra -pedantic -Werror -I../my/include/

SRC 		=   fill_of_zero.c \
                get_global_sign.c \
				is_first_smaller.c \
				get_sign.c \
				remove_sign.c

OBJ 		=	$(SRC:.c=.o)

NAME 		=	libnumformat.a

all:		$(NAME) copy

$(NAME):	build_lib

build_lib: 	$(OBJ)
	$(AR) $(NAME) $(OBJ)

copy:
	cp $(NAME) ../
	mkdir -p ../../include
	cp my_numformat.h ../../include

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME) a.out

re:			fclean all

.PHONY:		all build_lib copy clean fclean re
