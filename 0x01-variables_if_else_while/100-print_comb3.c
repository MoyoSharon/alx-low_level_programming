#include <stdio.h>

/**
 * main - entry point
 *
 * Return - always returns 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}			
