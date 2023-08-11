#include<stdio.h>
/**
 * main- entry point
 * Description: compare random number
 * Return : always  0 success
*/
int main(void)
{
	int n;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
