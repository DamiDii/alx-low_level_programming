#include "main.h"
/**
  * void print_alphabet(void)- returns no int
  * description using _putchar to print out the alphabet"
  */
void print_alphabet(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
