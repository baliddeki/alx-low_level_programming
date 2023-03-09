#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: any integer number
 * Return: integer
 */

int factorial(int n)
{
	int fact;
	
	if (n < 1)
	{
		return (-1);
	}
	else if (n > 1)
	{
		fact = n * factorial(n - 1);
	}
	else
	{
		fact = 1;
	}
	return (fact);
}
