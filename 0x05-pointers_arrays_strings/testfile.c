#include <stdio.h>
/**
 *
 */
int main(void)
{

	int n[10]; /* n is an array of 10 integers*/
	int i, j; 
	int var1;
	char var2[10];

	/*initialize elements of array n to 0 */
	for (i = 0; i < 10; i++)
	{
		n[i] = i + 90; /* set element at location i to i + 90 */

	}
	/* output each array element's value */
	for (j = 0; j < 10; j++)
	{
		printf("Elements[%d] = %d\n", j, n[j]);

	}
	printf("Address of var1 variable: %x\n", &var1);
	printf("address of var2 variable: %x\n", &var2);
	return (0);
	
}
