#include "main.h"

/**
 * power - calculates the power of a base number
 * @base: the base number
 * @pow: the exponent
 * Return: the result of base raised to pow
 */
unsigned long int power(unsigned int base, unsigned int pow)
{
	unsigned long int result = 1;
	unsigned int i;

	for (i = 1; i <= pow; i++)
		result *= base;

	return (result);
}

/**
 * print_binary - prints decimal version of binary
 * @num: printed num
 * Return: void
 */
void print_binary(unsigned long int num)
{
	unsigned long int divisor, result;
	char flag = 0;

	divisor = power(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		result = num & divisor;
		if (result == divisor)
		{
      flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}

		divisor >>= 1;
	}
}
