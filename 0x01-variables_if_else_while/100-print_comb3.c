#include <stdio.h>
/**
 * main- entry point
 * Description: 'assign random number to n and  compare random number'
 * Return: always  0 success
*/
int main(void)

{

        int n, m;


        for (n = 48; n <= 56; n++)

        {

                for (m = 49; m <= 57; m++)

                {

                        if (m > n)

                        {

                                putchar(n);

                                putchar(m);

                                if (n != 56 || m != 57)

                                {

                                        putchar(',');

                                        putchar(' ');

                                }

                        }

                }

        }

        putchar('\n');

        return (0);

}
