/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** Detect wether a number is prime
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 1)
        return (0);
    while (i < nb) {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}
