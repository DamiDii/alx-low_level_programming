#include "main.h"
/**
  * puts_half -  print half of a string with a new line.
  * @str: pointer to str
  * Return - void
 */

void puts_half(char *str)
{
	int length = 0;
	int start_index;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}

	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}

	_putchar('\n');
}