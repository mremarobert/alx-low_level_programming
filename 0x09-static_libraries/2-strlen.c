#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: the parameter of the char type as input
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char strings = s[0];

	while (strings != '\0')
	{
		sum++;
		strings = s[i++];
	}
	return (sum);
}
