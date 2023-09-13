#include "function_pointers.h"
#include <stddef.h>

/**
*array_iterator- a function that prints a name
*@array: input array
*@size: size of array
*@action: pointer to a function
*Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}









}
