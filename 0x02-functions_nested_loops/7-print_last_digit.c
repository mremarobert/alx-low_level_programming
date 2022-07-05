#include "main.h"
/**
 * print_last_digit - prints the last digig of a number
 * @n: input parameter
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int lastDigit;
	
	if (n < 0)

		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
