#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*string_nconcat - a function that concatenates two strings
*@s1: first string
*@s2: second string
*@n : unsigned int
*Return: always 0 if fail and pointer if success
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (l2 = 0; s2[l2] != '\0'; l2++)
	;
	if (n > l2)
	{
		n = l2;
	}
	new = (char *)malloc(l1 + n + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new[i] = s2[j];
		i++;
	}

	new[i] = '\0';
	return (new);




}
