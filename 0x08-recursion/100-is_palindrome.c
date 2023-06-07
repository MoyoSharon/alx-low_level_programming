#include "main.h"

int helper_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 ** is_palindrome - checks if a string is a palindrome or not.
 ** @s: string to check
 ** Return: 1 if a string is a palindrome and 0 if not.
**/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (helper_pal(s, 0, _strlen_recursion(s) - 1));
}

/**
 ** _strlen_recursion - a function that prints the length of a string.
** @s: string to count.
 ** Return: 0 if failure, length of string if success.
**/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 ** helper_pal - a function to help find the palindrome.
 ** @i: start of yhe string
 ** @len: length of string
 ** @s: string to check
 ** Return: 1 if success
**/

int helper_pal(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (s[i] != s[len])
		return (0);
	return (helper_pal(s, i + 1, len - 1));
}
