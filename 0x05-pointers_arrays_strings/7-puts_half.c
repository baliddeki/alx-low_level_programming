#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of the string
 * @str: any string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = strlen(str);
       	int start = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;
}
