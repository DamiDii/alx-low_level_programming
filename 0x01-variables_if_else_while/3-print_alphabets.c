#include <stdio.h>
/**
  * main -Entry point
  * Description: Print out the alphabet in lowercase and uppercasse
  *Return: Always 0 (Success)
  */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
