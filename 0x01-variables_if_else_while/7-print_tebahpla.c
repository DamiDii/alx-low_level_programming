#include <stdio.h>
/**
  * main -Entry point
  * Description: Print out the alphabet
  *Return: Always 0 (Success)
  */

int main(void)
{
	char c = 'a';

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
