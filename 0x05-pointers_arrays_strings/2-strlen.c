#include "main.h"
/**
  * _strlen - used to calculate the lenght of a string
  * @s: the pointer to the str we are getting the lenght to
  * Return: int (value of string)
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
