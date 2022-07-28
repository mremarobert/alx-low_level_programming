#include <stdio.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 - always success
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1)
	{
		printf("0");

	}
	else
	{
		j = 1;
		for (i = 0; i < argc; i++)
		j += atoi(argv[i]);
		printf("%d\n", j);
	}
	return (0);
}
