#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by des.
 * @des: desination.
 * @src: source.
 * Return: the pointer to des.
 */
char *_strcpy(char *des, char *src)
{
	int c = 0;

	while (c >= 0)
	{
		*(des + c) = *(src + c);
		if (*(src + c) == '\0')
			break;
		c++;
	}
	return (des);
}
