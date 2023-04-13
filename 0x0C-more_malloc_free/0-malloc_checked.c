#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using mallo
 * @b: int parameter
 * Return: 98 or pointer
 */

void *malloc_checked(unsigned int b)
{
	int *new = (int *) malloc(b);

	if (new == NULL)
	{
		exit(98);
	}
	else
	{
		return (new);
	}
}
