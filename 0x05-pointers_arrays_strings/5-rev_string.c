#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - main function
 * @s:parameter
 * Return: void;
 */

void rev_string(char *s)
{
	int a, b, c;

	a = strlen(s) - 1;
	c = strlen(s) - 1;
	while (a >= 0)
	{
		b = c - a;
		s[b] = s[a];
		a--;
	};
}
