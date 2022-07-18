#include "main.h"
/**
 * _memset - fills memory with a contant type
 * @s: memory area pointed to by s
 * @b: constant byte b
 * @n: the first n bytes
 *
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		*(s + k) = b;
	}
	return (s);
}
