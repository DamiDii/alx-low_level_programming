#include <stdio.h>
/**
  * main -Entry point
  * description: Print out the single digits of base 10
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c = '0';
	int d = '9';

	for (c = '0'; c <= d; c++)
	{
		if (c < d)
		{
			putchar(c);
			putchar(',');
			putchar(' ');
		}
		else if (c == d)
		{
			putchar(c);
			putchar(' ');
		}
	}
	return (0);
}
