#include "main.h"

/**
 * print_rev - function to print the reverse of a string
 * @s: any string
 * Return: nothing
 */

void print_rev(char *s)
{
	int a = 0;
	int i;
	char c;

	while (*(s + a))
	{
		a++;
	}
	for (i = 0; i < a / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + a - 1 - i);
		*(s + a - 1 - i) = c;
	}
}
