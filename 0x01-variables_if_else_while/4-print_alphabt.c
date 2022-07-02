#include <stdio.h>
/**
 * main - entry point
 * Description: prints alphabets
 * Return: returns success
 */
int main(void)
{
	char az = 'a';

	for (az = 'a'; az <= 'z'; az++)
	{
	if (az != 'q' && az != 'e')
	putchar(az);
	}
	putchar('\n');
return (0);
}
