#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @str1: string
 * Return: no return.
 */
void _puts_recursion(char *str1)
{
	if (*str1 != '\0')
	{
		_putchar(*str1);
		_puts_recursion(str1 + 1);
	}
	else
		_putchar('\n');
}
