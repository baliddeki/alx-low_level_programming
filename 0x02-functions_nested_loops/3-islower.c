#include "main.h"
#include <stdlib.h>
#include <ctype.h>
int _islower(int c)
{
	if (islower(c))
		_putchar('1');
	else
		_putchar('0');
}

