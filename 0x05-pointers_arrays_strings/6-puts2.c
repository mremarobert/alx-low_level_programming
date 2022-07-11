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
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}	
	_putchar('\n');

}
