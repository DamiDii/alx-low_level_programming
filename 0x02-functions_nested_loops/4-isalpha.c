#include "main.h"
/**
  * _isalpha - checks if c is a alphabetic character (Uppercase or lowercase)
  * @c: is the char to be check
  * Return: 1 if c is a letter, 0 otherwise
  */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
