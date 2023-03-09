#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: any string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i = strlen(s);
	int mid = i / 2;
	char c;
	int j = 0;

	c = s[j];
	s[j] = s[i - j - 1];
	s[i - j -1] = c;
	_putchar(c);
	j++;

	if (j < mid)
		_print_rev_recursion(s);
}
