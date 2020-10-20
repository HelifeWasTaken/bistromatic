##
## EPITECH PROJECT, 2020
## Sample Makefile
## File description:
## A sample of a Makefile to start Epitech
##

all: 		build_libmy build_numformat

build_libmy:
	make -C my/
	@echo

build_numformat:
	make -C numformat/
	@echo

clean:
	make clean -C ./my/
	make clean -C ./numformat/

fclean:
	make fclean -C ./my/
	make fclean -C ./numformat/

re:			fclean all

.PHONY:		all build_libmy build_numformat
