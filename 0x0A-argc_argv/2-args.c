#include <stdio.h>

/**
 * main - prints all argument it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))

	int i;

	for (i = 0; i < argc; i++)
	{
	printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
