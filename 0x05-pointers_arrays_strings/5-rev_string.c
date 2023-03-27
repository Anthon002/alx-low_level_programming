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
	int a, c;

	a = strlen(s) - 1;
	c = -1;
	while (a >= 0)
	{
		s[c] = s[a];
		c++;
		a--;
	};
}
