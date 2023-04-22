#include <stdio.h>

/**
 * main - a functin to print the number of argument
 *
 * @argc : number of arguments passed to the program
 * @argv : an array of pointers to the string of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}