#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index: function that searches for int
 * @array: array of ints
 * @size: size of array
 * @cmp: function pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			};
		}
	}
	return (-1);
}
