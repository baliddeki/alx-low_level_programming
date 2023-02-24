#include "main.h"

/**
 * _isalpha - checks for alphabetic chracter
 * @c: ay character
 * Return: 1 (Sucess), 0(Failure)
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}	
