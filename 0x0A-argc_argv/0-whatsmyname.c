#include "main.h"
#include <stdio.h>

/**
 * print_name - prints program_name
 * @argc: argument count
 * @*argv: array
 */

int main(int argc, char  *argv[])
{
	print_name(argv);
	return (0);
}

void print_name(char *argv[])
{
	printf("%s\n", argv[0]);
}
