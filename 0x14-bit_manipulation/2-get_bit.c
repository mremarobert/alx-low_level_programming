#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input parameter
 * @index: input parameter
 *
 * Return: 0 - always success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n >> index & 1) != 0 && (n >> index & 1) != 1)
		return (-1);
	if (index > (sizeof(n) * 8))
		return (-1);
	n = n >> index & 1;
	return (n);
}
