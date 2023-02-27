#include "main.h"

/**
 * reset - function takes a pointer as a paramater
 * it then updates the value to 98
 * @*n: pointer to any integer
 * Return: void
 */

void reset_to_98(int *n)
{
	int a;
	*n = 98;
	n = &a;

	_putchar(a);
}
