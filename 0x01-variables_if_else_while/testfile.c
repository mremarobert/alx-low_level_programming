#include <stdio.h>
/**
 * main - main entry point
 * Description: prints combination of numbers
 * Return: returns success
 */
int main(void)
{
	int i, j, k;

	for (i = 1; i < 10; i++)
	{
	for (j = 1; j < 10; j++)
	{
	for (k = 1; k < 10; k++)
	printf("%d %d %d\n", i, j, k);
	}
	}
return (0);
}
