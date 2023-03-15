#include "main.h"
#include <stdio.h>

/**
 * print_name - prints program_name
 * @argc: argument count
 * @*argv: array
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf(argv[i]);
		_putchar('\n');
	}
	return (0);
}
