#include "main.h"

/**
*print_sign- entry point
*Description: 'function that checks for alphabetic character'
*@n: parameter checked
*Return: always 0 success
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(1);
return (1);
}
else if (n == 0)
{
_putchar (0);
return (0);
}
else
{
_putchar(-1);
return (-1);
}
}
