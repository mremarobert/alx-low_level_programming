#include <stdio.h>
/**
 * main - entry point
 * Description: prints alphabets
 * Return: returns success
 */
int main(void)
{
	char az = 'z';

	for (az = 'z'; az >= 'a'; az--)
	{
	putchar(az);
	}
	putchar('\n');
return (0);
}
