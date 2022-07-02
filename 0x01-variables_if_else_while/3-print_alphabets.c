#include <stdio.h>
/**
 * main - entry point
 * Description: prints alphabets
 * Return: returns success
 */
int main(void)
{
	char az = 'a';
	char AZ = 'A';

	while (az <= 'z')
	{
	putchar(az);
	az++;
	}
	while (AZ <= 'Z')
	{
	putchar(AZ);
	AZ++;
	}
	putchar('\n');
return (0);
}
