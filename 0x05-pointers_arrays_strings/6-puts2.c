#include "main.h"
/**
  * puts2 - is used to print out every other character in a string
  * @str: pointer used to link string str
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
