#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: Null or pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *combined;
	int i = 0, in = 0, j = 0, jn = 0;
	int k;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	k = i + j;
	combined = (char *) malloc(sizeof(char) * (k + 1));
	if (combined == NULL)
	{
		return (NULL);
	}
	else
	{
		while (in < i)
		{
			combined[in] = s1[in];
			in++;
		}

		while (in < k)
		{
			combined[in] = s2[jn];
			in++;
			jn++;
		}
		return (combined);
	};
}
