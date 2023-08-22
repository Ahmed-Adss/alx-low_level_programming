#include"main.h"

/**
*print_rev - prints a string, in reverse
*@s: variable reversed
*Return: void
*/

void print_rev(char *s)
{
	int i,l;
	for(i = 0; s[i] != '\0'; i++)
	{
		l=i;
	}
	if (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');	

}
