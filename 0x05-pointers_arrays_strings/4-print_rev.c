#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function that prints a string in reverse
 * @s: input parameter
 * stringCounter is to first count to end, n is to count back
 * return: returns string in reverse
 */
void print_rev(char *s)
{
	int stringCounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		stringCounter++;
	}
	for (n = (stringCounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
