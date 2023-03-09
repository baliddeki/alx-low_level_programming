#include "main.h"
#include <math.h>

/**
 * _pow_recursion - evaluates the power of a number
 * @x: base integer
 * @y: power integer
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
	{
		z = -1;
	}
	else
	{
		z = pow(x, y);
	}
	return (z);
}
