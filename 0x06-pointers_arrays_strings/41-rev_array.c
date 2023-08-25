#include "main.h"

/**
*reverse_array - a function that reverses the content of an array of integers
*@a: the input array
*@n: is the number of elements of the array
*Return: the resulting string
*/




void reverse_array(int *a, int n)
{
	int i, b[n];

	for (i = 0; i < n; i++)
	{
		b[i] = a[n-i];
		_putchar('0' + b[i]);
		if (i != 0)
		{
			_putchar(44);
		}
		else
		{
			_putchar('\n');
		}
	}

}	
