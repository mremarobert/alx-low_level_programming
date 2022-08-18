#include "main.h"

/**
 * set_bit - sets value of a bit at a given index
 * @n: integer to be changed
 * @index: index of bit to be changed in n
 *
 * Return: Success 1, Fail -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	bits = 1 << index;

	*n = *n | bits;
	return (1);
}
