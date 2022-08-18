#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: a number to be printed
 *
 * Return: Always returns 0
 */
void print_binary(unsigned long int n);
{
	int i = 0, count, k, temp;

	if (n == 0)
	{
		printf("0");
		return;

	}
	
	temp = n;

	while (temp != 0)
	{
		i++;
		temp = temp >> 1;
	}
	
	for (count = i - 1; count >= 0; count--)
	{
		k = n >> count;
		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}
