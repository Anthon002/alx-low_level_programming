#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create an array of char
 * @size: size of the char
 * @c: character
 * Return: Null or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *strings;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	};
	strings = (char *) malloc(size * sizeof(char));

	if (strings == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			strings[i] = c;
		}
		return (strings);
	}
}
