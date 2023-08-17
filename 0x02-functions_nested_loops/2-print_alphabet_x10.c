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
		for (i = 97; i <= 122; i++)
		{
			_putchar('i' + 0);
		}
		_putchar('\n');
		n++;
	}
}
