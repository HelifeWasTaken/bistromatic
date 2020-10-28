/*
** EPITECH PROJECT, 2020
** error_check_multiple_definition
** File description:
** multiple_definition_check
*/

#include <stdbool.h>

static bool check_single(char const *data, int i)
{
    for (int j = i + 1; data[j]; j++) {
        if (data[i] == data[j])
            return (false);
    }
    return (true);
}

static bool check_single_integrity(char const *operator, char const *base)
{
    for (int i = 0; base[i + 1]; i++) {
        if (!check_single(base, i))
            return (false);
    }
    for (int i = 0; operator[i + 1]; i++) {
        if (!check_single(operator, i))
            return (false);
    }
    return (true);
}

static bool check_whole_integrity_loop(char const *operator, char const *base,
        int i)
{
    for (int j = 0; operator[j]; j++) {
        if (base[i] == operator[j])
            return (false);
    }
    return (true);
}

static bool check_whole_integrity(char const *operator, char const *base)
{
    for (int i = 0; base[i]; i++) {
        if (!check_whole_integrity_loop(operator, base, i))
            return (false);
    }
    return (true);
}

bool error_check_multiple_definition(char const *operator, char const *base)
{
    return (check_single_integrity(operator, base) &&
            check_whole_integrity(operator, base));
}
