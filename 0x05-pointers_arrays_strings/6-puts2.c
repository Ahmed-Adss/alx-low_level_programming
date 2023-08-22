#include"main.h"

/*
*puts2 - prints every other character of a string
*@str: variable printed
*Return: void
*/

void puts2(char *str)
{
	int i;
	int count = 0;
	for (i = 0; i != '\0'; i++)
	{
		count++;
	}

	for (i = 0; i <= count ; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return;



}
