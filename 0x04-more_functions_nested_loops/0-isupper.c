#include "main.h"

/**
 *_isupper - Checks if a character  is uppercase 
 * @c: is the character to be checked
 * Return: 1 if c is uppercase otherwise 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}