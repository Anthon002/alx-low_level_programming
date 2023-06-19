#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p = s;

	while (*p != '\0')
	{
		char *q = accept;

		while (*q != '\0')
		{
			if (*p == *q)
			{
				len++;
				break;
			}
			q++;
		}
		if (*q == '\0')
		{
			break;
		}
		p++;
	}
	return (len);
}
