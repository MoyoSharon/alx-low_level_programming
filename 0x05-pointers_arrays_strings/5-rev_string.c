#include "main.h"
#include <stdio.h>

/**
 *  * rev_string - Prints a string in reverse, followed by a new line.
 *   * @s: The string to be printed in reverse.
 */
void rev_string(char *s)
{
	int j, lens;
	char temp;

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	lens = i;

	for (i = 0, j = lens - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
