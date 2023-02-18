#include <stdio.h>
int main(void)
{
	int i = 0;
	int n = i + 1;

	for (i = 0; i < 9; i++)
	{
		while (n < 10)
		{
				putchar(i + '0');
				putchar(n + '0');
				if (i < 8 || n < 9)
				{
					putchar(',');
					putchar(' ');
				}
				n++;
		}	
	}	
	putchar('\n');
	return (0);
}
