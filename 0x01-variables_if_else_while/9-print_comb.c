#include <stdio.h>
/**
 * main- entry point
 * Description: 'assign random number to n and  compare random number'
 * Return: always  0 success
*/
int main(void)
{
	int l = 0;

	while (l <= 9)
	{
		putchar('0' + l);
		if (l != 9)
		{
			putchar(44);
			putchar(32);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
