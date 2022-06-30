#include<stdio.h>
/**
 * main - entry point of the function
 * Description: prints the size of various data types
 * Return: returns the sizes of the various data types.
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float d;

	printf("Size of a char:%lu byte(s)\n", sizeof(c));
	printf("Size of an int:%lu bytes(s)\n", sizeof(i));
	printf("Size of a long int:%lu byte(s)\n", sizeof(l));
	printf("Size of a long long int:%lu bytes(s)\n", sizeof(ll));
	printf("Size of a float:%lu byte(s)\n", sizeof(d));
	return (0);
}
