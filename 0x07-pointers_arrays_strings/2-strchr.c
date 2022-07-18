#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string to be searched
 * @c: target character
 *
 * Return:  a pointer to first occurrence of c or NULL if char not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (NULL);
}
