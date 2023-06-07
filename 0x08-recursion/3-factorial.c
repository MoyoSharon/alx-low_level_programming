#include "main.h"

/**
 ** factorial - function that returns factorial of anumber.
** @n: integer to find factorial of
** Return: -1 to indicate error, the factorial if successful.
**/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
