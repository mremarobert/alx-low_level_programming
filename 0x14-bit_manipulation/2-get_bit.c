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
	unsigned int bits;

	bitss = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (-1);
}
