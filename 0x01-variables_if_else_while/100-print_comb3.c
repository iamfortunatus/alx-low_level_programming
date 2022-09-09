#include <stdio.h>

/**
* main - Print numbers from 00 to 99
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int n;

		for (i = 0; i <= 9; i++)
   		 {
		 for (n = 0; n <= 9; n++)
	{
	  putchar(i + '0');
	  putchar(n + '0');

	  if (!(i == 9 && n == 9))
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');

  return (0);
}
