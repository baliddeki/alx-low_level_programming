#include "main.h"
/**
 * print_alphabet - prints the alphabet from a to z
 *
 * Return: alphabet
 */

void print_alphabet(void)
{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
}
