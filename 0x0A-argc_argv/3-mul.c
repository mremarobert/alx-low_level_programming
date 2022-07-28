#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;
		for (i = 1; i < argc; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}
	return (0);
}
