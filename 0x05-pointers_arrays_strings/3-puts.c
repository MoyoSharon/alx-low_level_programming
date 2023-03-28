#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string abd a newline
 * @str: string to print
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
