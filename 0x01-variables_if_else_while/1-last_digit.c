#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entry point
  * description: print the last digit from a number
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* finding your last digit (modulus)*/
	digit = n % 10;
	/* conditional statemnts to display results*/
	if (n < 6 && n != 0)
		printf("Last digit is %d and is %d less than 6 and not 0\n", n, digit);
	else if (n > 5)
		printf("Last digit of %d and is %d and is greater than 5\n", n, digit);
	else if (n == 0)
		printf("Last digit of %d and is %d and is 0\n", n, digit);
	return (0);
}
