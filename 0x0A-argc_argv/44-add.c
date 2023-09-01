#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0, sum = 0;

	if (argc == 1) printf("%d\n", 0); 

	for (i=1; i < argc; i++)
	{
		if (isdigit(argv[i]))
		sum += atoi(argv[i]);
		else printf("Error\n");
	}

	printf("%d\n", sum);
	return (0);









}
