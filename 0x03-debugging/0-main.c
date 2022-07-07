#include <stdio.h>
/**
 * main - causes an infinite loop
 * Description: returns i if its true others prints infinite loop avoided
 * Return: returns 0
 */
int main(void)
{
	int i;

	printf("incoming infinite loop\n");
	while (i < 20)
	{
	putchar(i);
	}
	printf("infinite loop avoided\n");

return (0);
}
