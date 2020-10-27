/*
** EPITECH PROJECT, 2020
** tokens
** File description:
** Source code
*/

#ifndef TOKENS_H
#define TOKENS_H

typedef struct operator_token {
    char symbol;
    int priority;
} operator_token_t;

void consume_char(char **expr);
char *number(char **expr);
operator_token_t operator(char **expr);

#endif