#include "main.h"

/**
 * print_most_numbers - used to print 0 - 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		if (n != 50 && n != 52 )
		{
			_putchar(n + 0);
		}
		n++;
	}
	_putchar('\n');
}
