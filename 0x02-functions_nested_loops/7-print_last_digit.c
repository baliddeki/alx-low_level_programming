#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of anu number
 * @n: any number
 * Return: 1
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}
