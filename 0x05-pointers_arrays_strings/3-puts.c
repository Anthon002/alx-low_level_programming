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
	for (int a = 0; a <= strlen(str); a++)
	{
		_putchar(*str);
	};
}
