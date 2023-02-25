#include "main.h"

/**
 * print_to_98 - function prints all natural numbers from n to 98
 * @n: any integer number
 * Return: void
 */

void print_to_98(int n)
{
	for (n = n; n <= 97; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	for (n = n; n >= 99; n--)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}
