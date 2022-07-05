#include <stdio.h>
/**
 * main - entry point to the function
 * Description: Contains the body of the function used
 * Return: returns 0 (always success)
 */
int main(void)
{
	char name[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	putchar(name[i]);
	}
	putchar('\n');
return (0);
}
