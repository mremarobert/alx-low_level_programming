#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: input parameter to the function
 * Return: returns
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}


