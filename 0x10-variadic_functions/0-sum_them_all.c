#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argum;
	int i = 0;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(argum, n);

		while (i < n)
		{
			sum += va_arg(argum, int);
			i++;
		}
		va_end(argum);
	};
	return (sum);
}
