#include "main.h"
/**
  * description: print alpahebt i10x using nested loop and in new line
  */

void print_alphabet_x10(void);

int main(void)
{
	char i;
	int n;

	i = 0;
	while (n <= 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar('i' + 0);
		}
		_putchar('\n');
		n++;
	}
	return (0);
}
