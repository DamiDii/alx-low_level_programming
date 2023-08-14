#include <stdio.h>
/**
  * main -Entry point
  * description: Print out the single digits of base 10
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{	putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
