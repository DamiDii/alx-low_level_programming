#include "main.h"

/**
 * print_line - Print _ n number of timw`
 * @n: number of times we want to print
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
