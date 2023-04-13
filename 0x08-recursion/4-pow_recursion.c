#include <stdio.h>

/**
 * _pow_recursion - function to return the power of
 * a integer.
 * @x : the integer of interest
 * @y: the base
 * Return: the power always
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
