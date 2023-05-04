#include "main.h"

/**
 * binary_to_uint - function to convert from binary to decimal
 * @b: character
 * Return: 0 or total
 */

unsigned int binary_to_uint(const char *b)
{
	int bLen = _strlen(b);
	unsigned int total = 0;
	int i = 0;

	while (i < bLen)
	{
		if (b[i] == '1')
		{
			total += 1 << (bLen - i - 1);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	};
	return (total);
}

