#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * _islower - this function checks for a lower case character and returns it
 * @c: any character
 * Return: 1 (Sucess) 0 (Failure)
 */

int (_islower(int c))
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

