#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function that prints a string in reverse
 * @s: input parameter
 * return: returns string in reverse
 */
void print_rev(char *s)
{
	char rev = s[0];
	int j = 0;
	int i;

	while (s[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
	{
		j--;
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}
