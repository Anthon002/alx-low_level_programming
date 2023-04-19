#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator: executing function
 * @array: array of int 
 * @size: size of array
 * @action: function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	if (array && size >= 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		};
	}
}
