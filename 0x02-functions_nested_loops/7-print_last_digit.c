#include "main.h"

int print_last_digit(int n)
{
	char l = n % 10;
	_putchar(l + '0');
	return l;
}
	
