/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** Detect wether a number is prime
*/

#include <stdbool.h>

bool my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 1)
        return (false);
    while (i < nb) {
        if (nb % i == 0)
            return (false);
        i++;
    }
    return (true);
}
