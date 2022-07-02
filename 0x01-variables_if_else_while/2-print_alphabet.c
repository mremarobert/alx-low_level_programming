#include <stdio.h>
/**
 * main - entry point
 * Description: prints alphabets
 * Return: returns success
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
	putchar(az);
	az++;
	}
	putchar('\n');
return (0);
}
