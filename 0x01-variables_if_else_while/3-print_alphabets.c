#include <stdio.h>
int main(void)
{
	char ul = 'A';
	char ll = 'a';
	
	while (ll <= 'z') 
	{
		putchar(ll);
		ll++;
	}
	while (ul <= 'Z')
	{
		putchar(ul);
		ul++;
	}		
	putchar('\n');
	return (0);
}
