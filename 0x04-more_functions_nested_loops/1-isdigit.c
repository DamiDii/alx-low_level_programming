#include "main.h"

/**
 * _isdigit - Checks if a character  is uppercase
 * @c: is the character to be checked
 * Return: 1 if c is uppercase otherwise 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
