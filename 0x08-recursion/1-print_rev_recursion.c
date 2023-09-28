#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @str1: string
 * Return: no return.
 */
void _print_rev_recursion(char *str1)
{
	if (*str1 != '\0')
	{
		_print_rev_recursion(str1 + 1);
		_putchar(*str1);
	}
}
