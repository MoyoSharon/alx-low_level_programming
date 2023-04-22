#include <stdio.h>

/**
 * main - a functin to print the name of a progra
 *
 * @argc : number of arguments passed to the program
 * @argv : an array of pointers to the string of arguments
 *
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
