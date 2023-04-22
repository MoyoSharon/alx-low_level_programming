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
	int  add = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	add += atoi(argv[i]);
	}
	printf("%d\n", add);

	return (0);
}
