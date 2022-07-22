#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: copy to memory area
 * @src: copy from memory area
 * @n: n bytes to be copied
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n;  i++)
	{
		*(dest + i) = *(src + i);

	}
	return (dest);
}
