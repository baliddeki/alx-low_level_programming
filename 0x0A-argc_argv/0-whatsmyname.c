#include "main.h"
#include <stdio.h>

/**
 * main - prints program_name
 * @argc: argument count
 * @*argv: array
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
