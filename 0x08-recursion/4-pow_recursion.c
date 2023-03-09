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
	int power;
	if (y < 0)
	{
		return(-1);
	}
	else if (y != 0)
	{
		power = x * _pow_recursion(x, (y - 1));
	}
	else
	{
		power = 1;
	}
	return power;
}
