#include "main.h"

/**
*_abs- entry point
*Description: 'computes the absolute value of an integer'
*@n: parameter checked
*Return: always 0 success
*/

int _abs(int)
{
int n;
if (n < 0)
{
n = -n;
}
return (n);
}
