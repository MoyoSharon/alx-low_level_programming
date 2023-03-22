#include "6-abs.c"
#include "main.h"
/**
*  * print_last_digit - main function
*   *
*    * @n: integer to get the last digit of
*     *
*      * Return: last digit of n
*/

int print_last_digit(int n)
{
	int l_digit;

	l_digit = _abs(n % 10);
	_putchar(l_digit + '0');
	return (l_digit);
}
