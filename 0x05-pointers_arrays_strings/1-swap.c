#include "main.h"
/**
  * swap_int - is used to swap the values of a and b integers.
  * @a: int whose value is to be swapped with b
  * @b: int whose value is to be swapped with a
  * void: mo return value
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
