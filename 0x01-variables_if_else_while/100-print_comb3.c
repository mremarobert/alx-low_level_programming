#include <stdio.h>
/**
 * main - entry point
 * Description: prints combination of two digits with the lowest one preferred.
 * Return: - return success (0)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	putchar((i % 10) + '0');
	putchar((j % 10) + '0');
	if (i == 8 && j == 9)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
return (0);
}
