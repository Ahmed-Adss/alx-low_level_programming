#include "main.h"
#include <stdlib.h>
/**
*_strdup- returns a pointer to a newly allocated space in memory
*@str: input string
*Return: always 0
*/


char *_strdup(char *str)
{
	char *new = 0;
	int n = 1, i = 1;

	if (str == NULL)
		return (NULL);
	for (i = 1; str[i] != '\0'; i++)
	{
		n++;
	}
	new = (char *) malloc(sizeof(char) * n);
	for (i = 0; i < n; i++)
	{
		new[i] = str[i];
	}
	return (new);



}
