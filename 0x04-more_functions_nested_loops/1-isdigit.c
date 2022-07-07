#include "main.h"
/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: input parameter or argument to the function
 * Return: returns 1 if c is digit otherwise 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (c == i)
		return (1);
	else
		return (0);
	}
}
