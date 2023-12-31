#include "main.h"

/**
*_strcat - a function that concatenates two strings
*@dest: first string
*@src: second string
*Return: the resulting string
*/


char *_strcat(char *dest, char *src)
{
	int s, count1 = 0, count2 = 0;

	for (s = 0; dest[s] != '\0'; s++)
		count1++;
	for (s = 0; src[s] != '\0'; s++)
		count2++;
	for (s = 0; s <= count2 - 1; s++)
	{
		dest[count1 + s] = src[s];
	}

	return (dest);


}
