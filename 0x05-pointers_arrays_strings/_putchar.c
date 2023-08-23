#include <unistd.h>
/**
  * _putchar - a function that stdout to terminal
  * @c : the character to print
  * Return: on success 1,
  * on error, -1 is returned, and errno is set apporopriately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
