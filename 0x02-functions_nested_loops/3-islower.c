#include "main.h"

/**
*_islower- entry point
*Description: 'take parameter "c" and checks for lowercase character'
*Return: always 0 success
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
