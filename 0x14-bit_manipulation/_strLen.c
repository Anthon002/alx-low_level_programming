#include "main.h"

/**
 * _strlen - string length
 * @str: string
 * Return:count
 */

int _strlen(const char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		++str;
	};
	return (count);
}
