#include <stdio.h>

/**
 * main - a program that prints number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("number of arguments:%d", argc);
	}
	return (0);
}