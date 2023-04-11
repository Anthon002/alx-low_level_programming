#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create an array of char
 * @size: size of the char
 * @char: character
 * Returns: Null or pointer
 */

char *create_array(unsigned int size, char c)
{	
	if (size == 0)
	{
		return (NULL);
	};
	
	char *strings;

	strings = (char*) malloc(size * sizeof(char));

	if (*strings == NULL)
	{
		return (NULL);
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			strings[i] = c;
		}
		return (strings);
	}
}
