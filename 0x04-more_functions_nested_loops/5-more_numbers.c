#include "main.h"
/**
 * more_numbers - prints more numbers
 * Return: void
 */
void more_numbers(void)
{
	char n, p;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			p = n;
			if (n > 9)
			{
				_putchar('1');
				p = n % 10;

			}
			_putchar('0' + p);
		}
		_putchar('\n');
		i++;
	}
}
