#include "main.h"

/**
*_isalpha- entry point
*Description: 'function that checks for alphabetic character'
*@c: parameter checked
*Return: always 0 success
*/

int _isalpha(int c)
{
if (97 <= c <= 122 || 65 <= c <= 90)
{
return (1);
}
else
{
return (0);
}
}

