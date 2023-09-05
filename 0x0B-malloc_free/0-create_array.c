#include "main.h"
#include <stdlib.h>
/**
*create_array- creates array of chars with a specific char and initializes it
*@size: unsigned int
*@c: char of function
*Return: always 0
*/


char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)

		ptr[i] = c;
	return (ptr);











}
