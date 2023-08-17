#include "main.h"

/**
*times_table- entry point
*Description: 'prints the 9 times table, starting with 0'
*Return: always 0 success
*/


void times_table(void)
{
int i, n, result;

for (i = 0 ; i <= 9 ; i++)
{
for (n = 0 ; n <= 9 ; n++)
{
result = i * n;
_putchar (result + '0');
}
_putchar ('\n');
}
}
