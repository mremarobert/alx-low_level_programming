#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: parameter to be printed
 * return: returns n parameters
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('\\');
		i++;
	}
	_putchar('\n');
}
