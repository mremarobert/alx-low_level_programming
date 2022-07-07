#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: input parameter to the function
 * Return: returns
 */
void print_line(int n)
{
	int n = 0;

	while ( n > 0)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}


