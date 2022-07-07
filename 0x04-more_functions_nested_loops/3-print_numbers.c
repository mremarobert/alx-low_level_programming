#include "main.h"
/**
 * print_numbers - a function that prints numbers
 * @void: returns void
 * Return: returns 0 or 1
 */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
