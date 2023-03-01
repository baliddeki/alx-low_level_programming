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
	int sign = 1;
	int result = 0;
	int digits_seen = 0;

	while (*s == ' ')
	{
		s++;
	}
	while ((*s == '+') || (*s == '-'))
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		digits_seen = 1;
		if ((result > INT_MAX / 10) || ((result == INT_MAX / 10) && (*s - '0' > INT_MAX % 10)))
		{
			return (sign > 0 ? INT_MAX : INT_MIN);
		}
		result = (result * 10) + (*s - '0');
		s++;
	}
	if (!digits_seen)
	{
	return (0);
	}
	return (result * sign);
}
