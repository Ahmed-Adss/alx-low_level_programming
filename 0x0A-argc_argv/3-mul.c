#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result1, result2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
		result1 = atoi(argv[1]);
		result2 = atoi(argv[2]);
		printf("%d\n", result1 * result2);
		return (0);
}
