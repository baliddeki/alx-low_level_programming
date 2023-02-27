#include "main.h"

/**
 * reset - function takes a pointer as a paramater 
 * it then updates the value to 98
 * Return: void
 */

void reset_to_98(int *n)
{
	int a;
	*n = 98;
	a = *n;

	_putchar(a);
}
