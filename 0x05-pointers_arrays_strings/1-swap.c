#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a - is the first integer
 * @b - is the second integer
 */

void swap_int(int *a, int *b)

{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
