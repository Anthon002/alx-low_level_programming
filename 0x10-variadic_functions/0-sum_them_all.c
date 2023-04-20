#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of argument
 * @...: arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}
		va_end(args);
	};
	return (sum);
}