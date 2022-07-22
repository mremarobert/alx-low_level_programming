#include "main.h"
/**
 * *_strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of maximum bytes to be used
 * Return: returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
