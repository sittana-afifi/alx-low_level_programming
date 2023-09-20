#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int cunt = 0, i;
	int sep_word[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + cunt) >= 97 && *(s + cunt) <= 122)
		*(s + cunt) = *(s + cunt) - 32;
	cunt++;
	while (*(s + cunt) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + cunt) == sep_word[i])
			{
				if ((*(s + (cunt + 1)) >= 97) && (*(s + (cunt + 1)) <= 122))
					*(s + (cunt + 1)) = *(s + (cunt + 1)) - 32;
				break;
			}
		}
		cunt++;
	}
	return (s);
}
