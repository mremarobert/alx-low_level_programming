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
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++
	}
	if (!c)
		return (s);
	return (NULL);
}
