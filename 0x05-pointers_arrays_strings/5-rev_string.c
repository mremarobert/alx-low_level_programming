#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: input character
 * return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int stringCounter = 0;
	int i;

	while (s[stringCounter] != '\0')
		stringCounter++;

	for (i = 0; i < stringCounter; i++)
	{
		stringCounter--;
		rev = s[i];
		s[i] = stringCounter;
		s[stringCounter] = rev;
	}


}
