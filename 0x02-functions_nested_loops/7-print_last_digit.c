#include "main.h"

/**
*print_last_digit- entry point
*Description: 'prints the last digit of a number'
*@n: parameter checked
*Return: always 0 success
*/

int print_last_digit(int n)
{
int f;
f = n % 10;
if (f < 0)
{
f = -f;
}
return (f);
}

