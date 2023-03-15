#include "main.h"
#include <stdio.h>

/**
 * main - prints programname
 * @argc: argument count
 * @*argv[]: array of strings
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
