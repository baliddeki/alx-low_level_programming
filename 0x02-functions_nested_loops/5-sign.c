#include "main.h"

/**
 * print_sign - function prints the sign of a number
 * @n: any integer number
 * Return: 1 (for positive numbers) 0 (for numbers ewual to zero) -1 (for negative numbers
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
	return (-1);
	}
}
