/*
** EPITECH PROJECT, 2020
** bistromatic
** File description:
** bistro
*/

#include <stdlib.h>
#include <unistd.h>
#include <my_stdio.h>
#include <bistromatic.h>
#include <my_str.h>
#include <my_stdlib.h>

void show_usage(void)
{
    my_putstr("USAGE\n./calc base operators size_read\n\nDESCRIPTION\n");
    my_putstr("- base: all the symbols of the base\n");
    my_putstr("- operators: the symbols for the parentheses");
    my_putstr("and the 5 operators\n");
    my_putstr("- size_read: number of characters to be read\n");
}

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == NULL) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac != 4 || my_strcmp(av[1], "-h") == 0) {
        show_usage();
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    size = my_getnbr(av[3]);
    expr = get_expr(size);
    eval_expr_prepare(av[1], av[2], expr);
    free(expr);
    return (EXIT_SUCCESS);
}
