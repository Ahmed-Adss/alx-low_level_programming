#include"main.h"

/**
*rev_string - function that reverses a string
*@n: variable to be reversed
*Return: void
*/

void rev_string(char *s)
{
	int i;
	int count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = count-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return;



}
