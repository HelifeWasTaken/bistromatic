/*
** EPITECH PROJECT, 2020
** getnbr.c
** File description:
** parse numbers
*/

static int detect_overflow(int *nb, int add, int sign)
{
    if (sign == 1) {
        if (*nb + add < 0)
            return (0);
        *nb = *nb + add;
        return (1);
    }
    if ((*nb + add) * -1 > 0)
        return (0);
    *nb = *nb + add;
    return (1);
}

static int detect_sign(char const *str, int *i, int *sign)
{
    while (!(str[*i] >= '0' && str[*i] <= '9')) {
        if ((str[*i] == '+' || str[*i] == '-') || str[*i] == ' ') {
            if (str[*i] == '-')
                *sign *= -1;
        } else {
            return (0);
        }
        (*i)++;
    }
    return (1);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int nb = 0;

    if (detect_sign(str, &i, &sign) == 0)
        return (0);
    while (str[i] >= '0' && str[i] <= '9') {
        if (nb * sign == -2147483640 && str[i] - '0' == 8)
            return (-2147483648);
        if (!detect_overflow(&nb, str[i] - '0', sign))
            return (0);
        if (str[i + 1] >= '0' && str[i + 1] <= '9')
            nb *= 10;
        i++;
    }
    return (sign * nb);
}
