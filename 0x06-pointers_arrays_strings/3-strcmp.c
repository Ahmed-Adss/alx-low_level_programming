#include "main.h"

/**
*_strcmp - a function that compares two strings
*@s1: first string
*@s2: second string
*Return: the resulting string
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;
	int maxlen = 0;
	int count = 0;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	if (len1 > len2)
		maxlen = len1;
	else if (len1 < len2)
		maxlen = len2;
	else if (len1 == len2)
		maxlen = len1;

	for (i = 0; i <= maxlen; i++)
	{
		if (s1[i] != s2[i])
		{
			count++;
		}
		else
		{
			continue;
		}

	}
	return (count);
}
