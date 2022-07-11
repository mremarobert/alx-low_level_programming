#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: input character
 * return: returns reverses string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int stringCounter = 0;
	int i;

	while (stringcounter != '\0')
		stringCounter++;

	for (i = 0; i < stringCounter; i++)
	{
		stringCounter--;
		rev = s[i];
		s[i] = stringCounter;
		s[stringCounter] = rev;
	}


}
