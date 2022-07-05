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
	int number = 0;

	if (number > 0)
	{
		number = 1;
		putchar(+);
	}
	else if (number == 0)
	{
		number = 0;
		putchar('0' + 0);
	}
	else
	{
		number = -1;
		putchar(-);
	{
	return (number);
}
