#include "main.h"
/**
  * print_rev - is used to print out string in reverse
  * @s: pointer used to link string str
  * void: no return value
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (length != 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
