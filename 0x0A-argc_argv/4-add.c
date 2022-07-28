#include <stdio.h>
#include <string.h>


/**
 * main - a program that adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 - always success
 */
int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");

	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);
			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
