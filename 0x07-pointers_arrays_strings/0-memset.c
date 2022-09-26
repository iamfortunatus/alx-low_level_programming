#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *str, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; ++i)
		*(str + i) = b;
	return (str);
}
