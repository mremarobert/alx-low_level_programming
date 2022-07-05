#include "main.h"
/**
 * _islower - prints lowercase character
 * Description:
 * @c: An input character
 * Return: return 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	char i;
	int islw = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		islw = 1;
	}
	return (islw);
}
