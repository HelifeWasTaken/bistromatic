##
## EPITECH PROJECT, 2020
## Sample Makefile
## File description:
## A sample of a Makefile to start Epitech
##

all:		$(NAME)

$(NAME):	build_libmy build_numformat

build_libmy:
	make -C ./my/

build_numformat:
	make -C ./num_format/

clean:
	make clean -C ./my/
	make clean -C ./num_format/

fclean:
	make fclean -C ./my/
	make fclean -C ./num_format/

re:			fclean all

.PHONY:		all build_libmy build_numformat