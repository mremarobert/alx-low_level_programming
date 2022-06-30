#include <stdio.h>
/**
 * main - entry point of the function
 * Description: prints the size of various data types
 * Return: returns the sizes of the various data types.
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int:%lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int:%lu bytes(s)\n", (unsigned long)sizeof(dl));
	printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
