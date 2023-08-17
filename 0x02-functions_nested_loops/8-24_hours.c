#include "main.h"

/**
*jack_bauer- entry point
*Description: 'prints every minute of the day of Jack Bauer'
*Return: always 0 success
*/

void jack_bauer(void)
{
int min, hr;
for (hr1 = 0;  hr <= 2; hr++)
{
_putchar('0' + hr1);
for (hr2 = 0; hr2 <= 9; hr2++)
{
_putchar('0' + hr2);
for (min1 = 0; min1 <= 6; min1++)
{
_putchar('0' + min1);
for (min2 = 0; min2 <= 9; min2++)
_putchar('0' + min2);
_putchar('\n');
}
}
}
}
