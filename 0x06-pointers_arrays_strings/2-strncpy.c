#include "main.h"
/**
 * _strncpy - copies a string
 * @destn: destnination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to destn.
 */

char *_strncpy(char *destn, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		destn[i] = src[i];
	for ( ; i < n; i++)
		destn[i] = '\0';

	return (destn);
}
