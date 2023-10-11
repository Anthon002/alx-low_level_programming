#include "search_algos.h"

/**
  * binary_search - Uses binary_search to look trhough a sorted array 
  * @array: pointer to the first element of the array
  * @size: size of the array
  * @value: value being searched for.
  *
  * Return:NULL, the value, -1
  *
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, min, max;

	if (array == NULL)
		return (-1);

	for (min = 0, max = size - 1; max >= min;)
	{
		printf("Searching in array: ");
		for (i = min; i < max; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = min + (max - min) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			max = i - 1;
		else
			min = i + 1;
	}

	return (-1);
}
