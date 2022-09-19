#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int a = 0;

	for (; a < n; a++)
	{
		printf("%d", *(a + a));
		if (a != (n - 1))
			printf(", ");
	}
	printf("\n");
}
