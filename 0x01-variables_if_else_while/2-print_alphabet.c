#include <stdio.h>
/**
  * main -Entry point
  * Description: Print out the alphabet
  *Return: Always 0 (Success)
  */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	return (0);
}