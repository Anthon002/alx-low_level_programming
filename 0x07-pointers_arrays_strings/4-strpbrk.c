#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: strings
 * @accept: strings
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *result = NULL;
    
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result = &s[i];
				break;
			}
		}
		if (result != NULL)
		{
			break;
		}
	}
	return (result);
}





