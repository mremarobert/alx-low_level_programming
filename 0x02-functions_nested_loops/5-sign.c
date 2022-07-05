#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * Description: prints a sign of a number
 * @n: input character
 * Return: returns 1 and + if n is greater than zero
 *  0 and prints 0 if n is zero
 *  -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int value = 0;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	{
	return (value);
}
