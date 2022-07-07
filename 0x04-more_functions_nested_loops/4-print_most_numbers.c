#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9 
 * @void: returns void
 * Return: returns 0 or 1
 */
void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++
	}
	_putchar('\n');
}

