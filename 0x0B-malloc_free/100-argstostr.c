#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenate argument
 * @ac: argument count
 * @av: argument array
 * Return: a pointer or Null
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]);
		total_len++;
	}

	result = (char *) malloc(sizeof(char) * (total_len + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(result + j, av[i]);
		j += strlen(av[i]);
		result[j++] = '\n';
	}
	result[total_len] = '\0';
	return (result);
}
