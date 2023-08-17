#include "main.h"
/**
  * print_alphabet_x10 - takes no stdin and stdout
  * description: print alpahebet 10x  using nested loop and in new line
  */
void print_alphabet_x10(void)
{
	char i;
	int n = 1;

	while (n <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		n++;
	}
}
