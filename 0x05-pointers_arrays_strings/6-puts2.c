#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * of a string and a newline
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
