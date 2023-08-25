#include "main.h"

/**
*_strncpy - a function that copies a string
*@dest: first string
*@src: second string
*@n: number of bytes taken
*Return: the resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);


}
