#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _atoi - function that converts string to integer
 * @s: any string
 * Return: Integer
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	} else if (*s == '+')
	{
		s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			return sign > 0 ? INT_MAX : INT_MIN;
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
