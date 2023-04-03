#include "main.h"
#include <stdio.h>

/**
 * _memset - memset() function
 * @s: memory
 * @b: constant byte
 * @n: size of the memory
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	};

	return (s);
}
