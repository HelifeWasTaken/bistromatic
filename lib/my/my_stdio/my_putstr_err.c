/*
** EPITECH PROJECT, 2020
** putstr_for_error_messages
** File description:
** print_error
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putstr_err(char const *str)
{
    write(2, str, my_strlen(str));
}
