##
## EPITECH PROJECT, 2020
## Sample Makefile
## File description:
## A sample of a Makefile to start Epitech
##

CC			=	gcc

CFLAGS 		=	-W -Wall -Wextra -pedantic -I./include

LFLAGS 		=	-L./lib -lmy

SRC 		=	main.c \
				do_op.c \
				calculations.c \
				my_get_sign.c

OBJ 		=	$(SRC:.c=.o)

EXEC 		=	infin_add

all:		$(EXEC)

$(EXEC):	build_lib build

build_lib:
	make -C ./lib/my/

build: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(LFLAGS) -o $(EXEC)

clean:
	rm -f $(OBJ) $(LIB_OBJ)

fclean:		clean
	rm -f $(EXEC)

re:			fclean all

.PHONY:		all build clean fclean re
