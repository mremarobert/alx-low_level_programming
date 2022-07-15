#include "main.h"
/**
 * *rot13 - rotate characters 13 places in the alphabet
 * IF statement to be used only once
 * @s: input string or characters
 * Not allowed to use switch
 * Not allowed to use ternary operation
 * Return: Always 0 (success)
 */
char *rot13(char *s);
{
	int i, j;
	char base[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; base[j] != '\0'; j++)
			if (s[i] == base[j])
			{
				s[i] = rot13[j];
				break;
			}
	}
	return (s);
}
