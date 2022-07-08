#include <stdio.h>
/**
 * main - prints largest prime factor
 * Return: Always 0
*/
int main(void)
{
	long int x = 612852475143;
	int lpf;

	for (lpf = 2; lpf < x; lpf++)
	{

		if (x % lpf == 0)
		{
		x = x / lpf;
		}
	}
	printf("%ld\n", lpf);
	return (0);

}
