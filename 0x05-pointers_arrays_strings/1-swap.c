#include <stdio.h>
#include "main.h"

/**
 * swap_int  - update the value of
 * two pointers
 *
 * @a: pointer to be swapped.
 * @b: pointer to be swapped.
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
