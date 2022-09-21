#include "main.h"

/**
 * leet - encode into 1337speak
 * @s: input value
 * Return: s value
 */

char *leet(char *s)
{
	int count = 0, a;
	int low_array[] = {97, 101, 111, 116, 108};
	int upper_array[] = {65, 69, 79, 84, 76};
	int num_array[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(s + count) == low_array[i] || *(s + count) == upper_array[i])
			{
				*(s + count) = num_array[a];
				break;
			}
		}
		count++;
	}

	return (s);
}
