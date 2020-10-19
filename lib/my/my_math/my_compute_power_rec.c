/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** compute power iterative
*/

int my_compute_power_rec(int nb, int power)
{
    int nb_copy = nb;

    if (power <= 0)
        return (power == 0);
    if (power > 1)
        nb = nb * my_compute_power_rec(nb_copy, power - 1);
    return (nb);
}
