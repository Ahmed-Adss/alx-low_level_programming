#include "function_pointers.h"


/**
*int_index- a function that prints a name
*@array: input array
*@size: size of array
*@cmp: pointer to a function
*Return: 0 always success
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				break;
			}
		}
	}
	if (i == 20 || size <= 0)
		i = -1;
	return (i);
}
