#include "main.h"

/**
 * _strchr - locates a character
 * @s: string
 * @c: character
 * Return: character or Null
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s  == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
