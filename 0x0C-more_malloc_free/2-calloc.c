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
	unsigned int i = 0;
	int *new = (int *)malloc((nmemb * size) + 1);

	for (i = 0; i < ((nmemb * size) - 1); i++)
	{
		new[i] = 0;
	}
	new[i + 1] = '\0';
	return (new);

}
