#include"main.h"

/**
*print_rev - prints a string, in reverse
*@s: variable reversed
*Return: void
*/

void print_rev(char *s)
{
	int i, l;

	l = 0;
	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		l = i;
	}
	if (l != 0)
	{
	for (i = l; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	}
	_putchar('\n');
}
