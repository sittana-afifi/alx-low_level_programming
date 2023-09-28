#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @str1: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *str1)
{
	if (*str1 == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(str1 + 1));
}
