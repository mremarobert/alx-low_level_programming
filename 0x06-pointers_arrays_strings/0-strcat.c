#include "main.h"
/**
 * *_strcat - a funtion that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: a pointer to resulting dest concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	
	do {
		a++;
		dest[i] = sr[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
