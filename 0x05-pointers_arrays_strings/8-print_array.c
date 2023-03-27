#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: parameter 1
 * @n: parameter 2
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
