/*
** EPITECH PROJECT, 2020
** error_check_multiple_definition
** File description:
** multiple_definition_check
*/

#include <stdbool.h>

bool check_base_integrity(char const *base)
{
    for (int i = 0; base[i + 1]; i++) {
        for (int j = i + 1; base[j]; j++) {
            if (base[i] == base[j])
                return (false);
        }
    }
    return (true);
}

bool check_operator_integrity(char const *operator)
{
    for (int i = 0; operator[i + 1]; i++) {
        for (int j = i + 1; operator[j]; j++) {
            if (operator[i] == operator[j])
                return (false);
        }
    }
    return (true);
}

bool check_operator_and_base_integrity(char const *operator, char const *base)
{
    for (int i = 0; base[i]; i++) {
        for (int j = 0; operator[j]; j++) {
            if (base[i] == operator[j])
                return (false);
        }
    }
    return (true);
}

bool error_check_multiple_definition(char const *operator, char const *base)
{
    return (check_operator_integrity(operator) && check_base_integrity(base) &&
            check_operator_and_base_integrity(operator, base));
}
