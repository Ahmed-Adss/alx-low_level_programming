#include <stdio.h>
/**
 * main- entry point
 * Description: 'assign random number to n and  compare random number'
 * Return: always  0 success
*/
int main(void)
{
	int l = 0;
	int n = 0;

	while (l <= 9)
	{
		
		while(n <= 9)
		{
			putchar('0' + l);
			putchar('0' + n);
	                if (l != 9 && n != 9)
        	        {
                        putchar(44);
                        putchar(32);
               		 }
			n++;
		}
		n = 0;
		l++;
	}
	putchar('\n');
	return (0);
}
