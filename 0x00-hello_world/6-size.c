#include <stdio.h>
int main(void)
{
	char c;
	int i;
	long int b;
	long long int f;
	float d;
	printf("\nSize of a char: %lu byte(s)", (unsigned long)sizeof(c));
	printf("\nSize of an int: %lu byte(s)", (unsigned long)sizeof(i));
	printf("\nSize of a long int: %lu byte(s)", (unsigned long)sizeof(b));
	printf("\nSize of a long long int: %lu byte(s)", (unsigned long)sizeof(f));
	printf("\nSize of a float: %lu byte(s)", (unsigned long)sizeof(d));
	return (0);
}
