#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all digits.
 * Return: Always 0 (Success)
 */
int main(void)
{   char num[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
