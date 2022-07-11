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
	int stringElement = 0;
	int i;

	while (s[stringElement] != '\0')
		stringElement++;

	for (i = 0; i < stringElement; i++)
	{
		stringElement--;
		rev = s[i];
		s[i] = s[stringElement];
		s[stringElement] = rev;
	}
}
