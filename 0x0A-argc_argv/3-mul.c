#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc : number of arguments passed to the program
 * @argv : an array of pointers to the string of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int  mul;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
