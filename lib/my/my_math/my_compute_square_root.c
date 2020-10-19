/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** compute_square_root
*/

static int process_square_root(int nb, int answer)
{
    while (answer <= (nb / 2)) {
        if ((answer * answer) == nb)
            return (answer);
        answer++;
    }
    return (0);
}

int my_compute_square_root(int nb)
{
    int answer = 1;

    if (nb <= 0)
        return (0);
    else if (nb == 1)
        return (1);
    return (process_square_root(nb, answer));
}
