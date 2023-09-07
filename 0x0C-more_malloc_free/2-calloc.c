#include "main.h"
#include <stdlib.h>

/**
*_calloc - a function that allocates memory for an array, using malloc
*@nmemb: unsigned int
*@size: unsigned int
*Return: always 0 if fail and pointer if success
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	void *new = (void *)malloc(nmemb * size);

	for (i = 0; i < (nmemb * size); i++)
	{
		new[i] = 0;
	}

	return (new);

















}
