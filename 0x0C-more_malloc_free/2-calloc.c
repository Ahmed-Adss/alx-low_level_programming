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
	void *new = (void *)malloc(nmemb * size);

	return (new);

















}
