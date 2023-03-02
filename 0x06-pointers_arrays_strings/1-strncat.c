#include "main.h"
#include <string.h>

/**
 * *_strncat - similar to strcat function except
 * that it will use atmost n bytes from src
 * @dest: any string
 * @src: any string
 * #n: any int
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0' && n > 0)
	{
		src++;
		n--;
	}
	*dest_end = '\0';
	return dest;
		                                                                         }
