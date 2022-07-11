#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every character of a string
 * @str: input string
 * return: returns string characters.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');

}
