#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - newly allocates memory
 * @str: string
 * Return: pointer or Null
 */

char *_strdup(char *str)
{
	char *new;
	int i = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	if (str == NULL)
	{
		return (NULL);
	}

	new = (char *) malloc(sizeof(char) * j);

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < j)
		{
			i++;
			new[i] = str[i];
		}
		return (new);
	}
}
