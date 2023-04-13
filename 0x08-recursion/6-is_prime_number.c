#include <stdio.h>

int _prime_checker(int n, int i);

/**
 * is_prime_number - function to return a prime number
 *  _prime_checker - recursive fubction to help find
 * the truth
 * @n : the integer of interest
 * Return: the prime always
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (_prime_checker(n, 2));
}

/**
 ** _prime_checker - recursive function to help find a prime
 ** @n: the number to check prime status
 ** @i: the divisible factor
 ** Return: he interger if it is a prime
 **/
int _prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime_checker(n, i - 1));
}
