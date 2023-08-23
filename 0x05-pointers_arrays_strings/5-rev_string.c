#include "main.h"
/**
  * rev_string - is used to reverse a string
  * @s: pointer used to link string str
  * void: no return value
 */

void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char tempo;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	while (start < length)
	{
		tempo = s[start];
		s[start] = s[length];
		s[length] = tempo;

		start++;
		length--;
	}
}
