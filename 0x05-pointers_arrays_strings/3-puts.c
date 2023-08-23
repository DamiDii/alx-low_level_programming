#include "main.h"
#include <unistd.h>
/**
  * _puts - is used to print out string to
  * @*str: point used to link string str
  * @str: is the array of characters (string) to be printed
  * void: no return value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[0]);
		str++;
	}
}
