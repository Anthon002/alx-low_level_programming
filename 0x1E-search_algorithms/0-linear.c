#include "search_algos.h"

/*
 * int linear_search - function with linear search algorithm implementation
 * @array: the array of elements to search through
 * @size: the size of the array
 * value: the value to search for
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	int j = 0;

	while (j < (int)size)
	{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		};
		j++;
	};
	return (-1);
	
}
