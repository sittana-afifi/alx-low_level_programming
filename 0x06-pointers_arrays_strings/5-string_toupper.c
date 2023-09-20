#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int cunt = 0;

	while (*(s + cunt) != '\0')
	{
		if ((*(s + cunt) >= 97) && (*(s + cunt) <= 122))
			*(s + cunt) = *(s + cunt) - 32;
		cunt++;
	}

	return (s);
}
