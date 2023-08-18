#include "main.h"

/**
 * print_numbers - used to print 0 - 9
 */

void print_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		_putchar(n + 0);
		n++;
	}
	_putchar('\n');
}
