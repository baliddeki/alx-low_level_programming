#include "main.h"
#include <stdlib.h>

int print_last_digit(int n)
{	int c = abs(n);
	char l = c % 10;
	_putchar(l + '0');
	return l;
}
	
