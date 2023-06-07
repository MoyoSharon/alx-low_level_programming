#include <unistd.h>

/**
 ** _putchar - Writes a character to the stdout.
 ** @c: The character to be written.
 **
 ** Return: On success 1.
 ** On failure, it returns -1.
**/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
