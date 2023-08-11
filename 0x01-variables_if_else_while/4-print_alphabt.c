#include <stdio.h>
/**
 * main- entry point
 * Description: 'assign random number to n and  compare random number'
 * Return: always  0 success
*/
int main(void)
{
	char l = 97;

	while (l <= 122)
	{
		if (l != 101 && l != 113)
		{
		putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
