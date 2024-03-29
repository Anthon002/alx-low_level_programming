#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - reverse with recursion
 * @s: parameter to take string
 * Return: none
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

