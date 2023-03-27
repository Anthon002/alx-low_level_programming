#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts- _putchar string
 * @str: string
 * Return: none
 */

void _puts(char *str)
{
	int c = 0;

	while (*str[c] != '\0')
	{
		_putchar(*str[c]);
		c++;
	};
}
