#include <stdio.h>
/**
 * main- entry point
 * Description: 'assign random number to n and  compare random number'
 * Return: always  0 success
*/
int main(void)
{
	int l = 0;
	int n = 97;

	while (l <= 9)
	{
		putchar('0' + l);
		l++;
	}
	while (n <= 102)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
