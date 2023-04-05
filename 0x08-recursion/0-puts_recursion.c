#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - _putchar puts with recursion
 * @s: parameter
 * Return: none
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar(*s);
	};
}
