#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: parameter to be printed
 * return: returns n parameters
 */
void print_diagonal(int n)
{
	int i = 0, pp;

	while (i < n && n > 0)
	{
		pp = 0;
		while (pp < i)
		{
			_putchar(' ');
			pp++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
