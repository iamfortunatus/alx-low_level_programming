#include "main.h"

/**
 * _puts - prints string
 * Return: void
 */

void _puts(char *udev)
{
	int i = 0;

	while (udev[i] != '\0')
	{
		_putchar(udev[i]);
		i++;
	}

	_putchar('\n');
}
