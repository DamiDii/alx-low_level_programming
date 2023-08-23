#include <stdio.h>
#include "main.h"

/**
  * print_array - funtion to print out elements in an array
  * @a: pointer to array
  * @n: number of elements of the array to be printed
  * Return: void
  **/

void print_array(int *a, int n)
{
	int i;

	if (n <= 0 || a == NULL)
	{
		printf("Invalid input or empty array.\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
