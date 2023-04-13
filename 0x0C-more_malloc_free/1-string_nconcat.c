#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int j = 0;
	int k = 0;

	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	if (n >= k)
	{
		n = k;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	new = (char *) malloc(sizeof(char) * (n + j + 1));
	j = 0;
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[j] != '\0')
		{
			new[j] = s1[j];
			j++;
		};
		while (s2[k] != '\0')
		{
			new[j] = s2[k];
			k++;
			j++;
		};
		new[j] = '\0';
		return (new);
	};
}


