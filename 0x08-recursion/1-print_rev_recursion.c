#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: any string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i = strlen(s) - 1;
	char c = *(s + i);

	_putchar(c);
	if (i >= 0)
		i--;
		_print_rev_recursion(s);
}
