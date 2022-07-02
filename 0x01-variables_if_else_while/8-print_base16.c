#include <stdio.h>
/**
 * main - main entry point
 * Description: prints hexadecimal numbers 0 1 2 3 4 5 6 7 8 9 a b c d e f
 * Return: returns success
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
	putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
	putchar(a);
	}
	putchar('\n');
return (0);
}
