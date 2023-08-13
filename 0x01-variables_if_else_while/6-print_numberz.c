#include <stdio.h>
/**
  * main -Entry point
  * Description: Print out the single digits of base 10
  *Return: Always 0 (Success)
  */

int main(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
