#include <stdio.h>
/**
  * main -Entry point
  * description: Print out the single digits of base 10
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c;
	int d;

	for (c = 48; c <= 56; c++)
	{
		for (d = 49; d <= 57; d++)
		{
			if (c > d)
			{
				putchar(c);
				putchar(d);
				if (c != 56 || d != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

