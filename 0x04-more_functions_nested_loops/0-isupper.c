#include "main.h"
/**
 * _isupper - checks if the character is uppercase
 * @c: is the integer used as the input value or parameter for the function.
 * Return: 1 0f uppercase character and 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
