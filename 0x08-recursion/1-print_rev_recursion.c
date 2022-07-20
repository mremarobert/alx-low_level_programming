#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: the string to be printed in reverse
 * Return: a reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s++);
	_putchar(*s);
	}
}
