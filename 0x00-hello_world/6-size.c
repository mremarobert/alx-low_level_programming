#include<stdio.h>
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

	printf("Size of a char:%c\n", sizeof(a));
	printf("Size of an int:%d\n", sizeof(b));
	printf("Size of a long int:%ld\n", sizeof(c));
	printf("Size of a long long int:%lld\n", sizeof(d));
	printf("Size of a float:%lf\n", sizeof(e));
	return (0);
}
