#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all numbers
 * @n: the number of args
 * Return:sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);
		return (0);
	}
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}

