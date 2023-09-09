#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all alphbet in reverse.
 * Return: Always 0 (Success)
 */
int main(void)
{   char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[(25-i)]);
	}
	putchar('\n');
	return (0);
}
