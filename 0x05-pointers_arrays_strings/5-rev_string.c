#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_tring - main function
 * @s:parameter
 * Return: void;
 */

void rev_string(char *s)
{
	int c = strlen(s) - 1;

	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	};
}
