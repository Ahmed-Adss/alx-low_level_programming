#include"main.h"

/**
*_puts - hat prints a string, followed by a new line
*@str: variable input
*Return: void
*/

void _puts(char *str)
{
	int i;
	for (i = 0; str[i] =! '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return;
}
