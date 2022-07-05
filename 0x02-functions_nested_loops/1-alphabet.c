#include <unistd.h>
#include "main.h"
/**
 * main - main entry point
 * Description: prints
 * Return: returns 0 (always success)
 */

void print_alphabet(void)
{
	int print_alphabet;

	for (print_alphabet= 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
	putchar(print_alphabet);
	}
	putchar('\n');
}
