#include "main.h"
/**
  * _print_rev - is used to print out string in reverse
  * @*str: point used to link string str
  * @puts2: is the array of characters (string) to be printed
  * void: no return value
 */

void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length += 2;
	}
	_putchar('\n');
}
