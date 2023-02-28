#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: any string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int len;
	char temp;
	while (*(s + len))
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = temp;
	}
}
