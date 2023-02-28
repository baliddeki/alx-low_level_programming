#include "main.h"
#include <publib.h>

/**
 * print_rev - function to print the reverse of a string
 * @s: any string
 * Return: nothing
 */

void print_rev(char *s)
{
	char *new;
	puts(strrev(s));
}
