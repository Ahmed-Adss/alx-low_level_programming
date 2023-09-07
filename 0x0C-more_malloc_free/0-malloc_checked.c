#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - a function that allocates memory using malloc
*@b: unsigned int
*Return: always 0 if fail and pointer if success
*/


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}

	return (ptr);
}
