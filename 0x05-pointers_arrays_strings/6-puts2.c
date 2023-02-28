#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: any string
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while ((*(str + i)) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
