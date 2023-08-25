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

	int i = 0;

	if (n < 98)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	else if (n == 0)
	{
		dest = dest;
	}
	else if (n > 98)
	{
		n = 98;
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}

	return (dest);


}
