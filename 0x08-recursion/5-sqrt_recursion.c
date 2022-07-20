#include "main.h"

int isSqrt(int n, int i);

/**
 * isSqrt - helper function for _sqrt_recursion
 * @n: input number
 * @i: iterator
 * Return: square root of a number
 */
int isSqrt(int n, int i)
{
	if (i < 1)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (isSqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input parameter
 * Return: 0 always success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
		return (isSqrt(n, 1));
}
