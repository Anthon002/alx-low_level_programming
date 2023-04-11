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

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}

	new = (char *) malloc(sizeof(char) * (j + 1));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < j)
		{
			new[i] = str[i];
			i++;
		}
		return (new);
	}
	free(new);
}
