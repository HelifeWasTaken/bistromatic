/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** find the next prime
*/

#include <stdbool.h>

bool my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    while (!my_is_prime(nb))
        nb++;
    return (nb);
}
