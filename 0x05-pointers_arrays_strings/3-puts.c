#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int udev = 0;

	while (str[udev] != '\0')
	{
		_putchar(str[udev]);
		udev++;
	}

	_putchar('\n');
}
