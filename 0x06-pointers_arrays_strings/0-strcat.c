#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	char *result = malloc(strlen(dest) + strlen(src) + 1);
	int c = 0;
	int d = 0;
	int e = 0;

	while (*dest != '\0')
	{
		result[d] = dest[c];
		c++;
		d++;
	};
	c = 0;

	while (e == 0)
	{
		result[d] = src[c];
		c++;
		d++;
		if (*src == '\0')
		{
			break;
		};
	};

	return (result);
}
