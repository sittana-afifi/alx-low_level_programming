#include "holberton.h"
/**
 * _memcpy - copies memory area,
 * @dst: dstination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dst.
 */
char *_memcpy(char *dst, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dst + i) =  *(src + i);

	return (dst);
}
