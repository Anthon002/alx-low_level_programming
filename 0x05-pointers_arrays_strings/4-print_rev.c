#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev(char *s)- print in reverse
 * @s: parameter
 * Return: none
 */

void print_rev(char *s)
{
	int c = strlen(s) - 1;

	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	};
	_putchar('\n');
}
