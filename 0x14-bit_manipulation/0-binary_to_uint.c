#include "main.h"
#include <math.h>

/**
*binary_to_int -  function that converts a binary number to an unsigned int
*@b: input number
*Return: unsigned integer number
*/


unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int result = 0;

	len = i = 0;

	while(*(b+len) != '\0')
		len++;
	
	for (i = 0; i <= len; i++)
		result +=( b[i] * (pow(2, i)));

	return (result);

}
