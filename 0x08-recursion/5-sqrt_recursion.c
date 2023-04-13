#include <stdio.h>

int _sqrt_guess(int n, int i);

/**
 * _sqrt_recursion - function to return the square root of
 * a integer
 *  _sqrt_guess - recursive fubction to help find
 * the squate root
 * @n : the integer to find squart root of
 * Return: the square root always
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_guess(n, 0));
}

/**
 ** _sqrt_guess - recursive function to help find the square root
 ** @n: the number to find the square root of
 ** @i: the current guess for the square root
 ** Return: the square root of n or -1
 * if n does not have a natural square root
 **/
int _sqrt_guess(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_guess(n, i + 1));
}
