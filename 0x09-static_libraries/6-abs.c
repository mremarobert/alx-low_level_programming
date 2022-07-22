#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * Description: absolute values
 * @n: input value
 * Return: always success (0)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
