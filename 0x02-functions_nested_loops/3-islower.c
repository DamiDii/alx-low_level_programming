#include "main.h"
/**
  * _islower - is used to check for lowercase
  * @c: is the character we are checking
  * Return: 1 if c is lowercase, otherwise 0 if not
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
