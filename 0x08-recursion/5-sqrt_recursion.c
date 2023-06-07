#include "main.h"

int _sqrt_recursion_helper(int n, int y);
/**
 ** _sqrt_recursion - a function that returns the natural square root of n.
 ** @n: number to find square root of.
 ** Return: natural square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - a helper function to guess the natural sqrt of n.
 * @y: possible natural square root of n.
 * @n: number to find square root of.
 * Return: natural square root of n.
 **/

int _sqrt_recursion_helper(int n, int y)
{
	if (y * y == n)
		return (y);
	if (y * y > n)
		return (-1);
	return (_sqrt_recursion_helper(n, y + 1));
}
