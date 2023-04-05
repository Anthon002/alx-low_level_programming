#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - checks to see if a word is a palindrome
 * @s: parameter
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0')
	{
		return (0);
	}
	else
	{
		if (*s == *(s + (strlen(s) - 1)))
		{
			*(s + (strlen(s) - 1)) = '\0';
			return (is_palindrome(s + 1));
		}
		else
		{
			return (1);
	}
	}
}

