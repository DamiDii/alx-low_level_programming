#include <unistd.h>
/**
  * _putchar: a function that stdout to terminal
  * char: the argument for _putchar
  * Return: Always 0 (success)
 */
int _putchar (char c)
{
	write(1, &c, 1);
}
