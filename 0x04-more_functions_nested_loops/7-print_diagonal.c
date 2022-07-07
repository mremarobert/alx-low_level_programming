#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number of \\ to be printed
 * return: void
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
