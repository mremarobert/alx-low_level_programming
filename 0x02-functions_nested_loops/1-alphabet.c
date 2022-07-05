#include <stdio.h>
/**
 * main - main entry point
 * Description: prints
 * Return: returns 0 (always success)
 */

int main(void)
{
	char print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
	putchar(print_alphabet);
	}
	putchar('\n');
return (0);
}
