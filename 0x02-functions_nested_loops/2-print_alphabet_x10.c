#include "main.h"
/**
  *main - entry Point
  * description: print alpahebt i10x using nested loop and in new line
  * Return: always 0 (success)
  */

void print_alphabet_x10(void);

int main(void)
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

