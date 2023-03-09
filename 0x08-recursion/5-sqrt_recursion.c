#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function works out the nature square root of a number
 * @n: any integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
	{
		return (-1);
	}
	else if (n != 0)
	{
		root = sqrt(n);
	}
	else
	{
		root = 0;
	}
	return (root);
}
