#include <stdio.h>
#include "main.h"

/**
 * swap_int- swapping values btw parameters
 * @a: first parameter
 * @b: second parameter
 * Retur: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
