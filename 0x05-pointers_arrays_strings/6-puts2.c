#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: any string
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while ((*(str + i)))
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
