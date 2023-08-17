#include "main.h"
/**
  * _isalpha - Entry Point
  * description checks for alphabet character
  * @c: is thr char to  be char
  * Return: 1 if c is a letter, 0 otherwise
  */
int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'));
}
