#include "main.h"

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int r = i*j;
			if (j == 0)
			{
				_putchar('0');
			} else if (r < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			} else 
			{	_putchar(',');
				_putchar(' ');
				_putchar(r / 10 + '0');	
				_putchar(r % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
