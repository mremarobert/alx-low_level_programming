#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the input number
 * Return: 0 always success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if ( n == 1)
	{
		return (1);
	}
		return (n * factorial(n - 1));

}
