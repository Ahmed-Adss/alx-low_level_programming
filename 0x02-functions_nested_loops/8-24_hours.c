#include "main.h"

/**
*jack_bauer- entry point
*Description: 'prints every minute of the day of Jack Bauer'
*Return: always 0 success
*/

void jack_bauer(void)
{
int min1, min2, hr1, hr2;
for (hr1 = 0;  hr1 <= 2; hr1++)
{
for (hr2 = 0; hr2 <= 9; hr2++)
{
if ((hr1 <= 1 && hr2 <= 9) || (hr1 <= 2 && hr2 <= 3))
{
for (min1 = 0; min1 <= 6; min1++)
{
for (min2 = 0; min2 <= 9; min2++)
_putchar(hr1 + '0');
_putchar(hr2 + '0');
_putchar(58);
_putchar(min1 + '0');
_putchar(min2 + '0');
_putchar('\n');
}
}
}
}
}
