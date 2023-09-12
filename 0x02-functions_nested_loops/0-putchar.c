#include "_putchar.c"
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}

#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */
