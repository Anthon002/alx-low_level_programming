#include "variadic_functions.h"

/**
 * print_numbers - function to print no.s with newlines
 * @separator: separator
 * @n: number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
