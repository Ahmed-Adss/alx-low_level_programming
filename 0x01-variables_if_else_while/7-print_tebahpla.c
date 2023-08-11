#include <stdio.h>
/**
 * main- entry point
 * Description: 'assign random number to n and  compare random number'
 * Return: always  0 success
*/
int main(void)
{
	int l = 9;

	while (l >= 0)
	{
		putchar('0' + l);
		l--;
	}
	putchar('\n');
	return (0);
}
