#include "main.h"
#include <string.h>

/**
 * _preint_rev_recursion - prints the reverse of a string
 * @s: any string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i = strlen(s) - 1;

	_putchar(i);
	i--;
	if (i >= 0)
		_print_rev_recursion(s);
}
