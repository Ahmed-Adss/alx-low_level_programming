#include "main.h"
#include <stdlib.h>
/**
*str_concat- a function that concatenates two strings
*@s1: first string
*@s2: second string
*Return: always 0
*/


char *str_concat(char *s1, char *s2)
{
	char *new = 0;
	int i = 1, n1 = 0, n2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		n1++;
	}
	for (i = 1; s2[i] != '\0'; i++)
	{
		n2++;
	}
	new = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	for (i = 0; i < n1 + 1; i++)
	{
		new[i] = s1[i];
	}
	for (i = 0; i < (n1 + n2 + 1); i++)
	{
		new[n1 + i] = s2[i];
	}
	return (new);







}
