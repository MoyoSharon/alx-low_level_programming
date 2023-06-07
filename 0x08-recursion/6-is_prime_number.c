#include "main.h"

int helper_prime_number(int n, int y);

/**
 ** is_prime_number - functiom to determine if integer is a prime number.
 ** @n: input integer
 ** Return: 0 if not a prime number, 1 if prime number
 **/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper_prime_number(n, 2));
}

/**
 * helper_prime_number - helper function to determine if n is a prime number.
 * @n: input integer
 * @y: prime divisor
 * Return: 1 if success.
 **/

int helper_prime_number(int n, int y)
{
	if (y * y > n)
		return (1);
	if (n % y == 0)
		return (0);
	return (helper_prime_number(n, ++y));
}
