#include "main.h"

/**
 * binary_to_uint - binary to an unsigned int.
 * @binary: 0 or result
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0;
	int i = 0;

	if (!binary)
		return (0);

	while (binary[i] != '\0')
	{
		if (binary[i] != '0' && binary[i] != '1')
			return (0);

		result <<= 1;
		if (binary[i] == '1')
			result += 1;

		i++;
	}

	return (result);
}
