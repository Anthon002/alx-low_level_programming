#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - _putchar puts with recursion
 * @s: parameter
 * Return: none
 */

void _puts_recursion(char *s)
{
	char words[] = "Puts with recursion";

	s = words;

	int i = 0;

	while (*s)
	{
		_putchar(words[i]);
		i++;
	}
}
