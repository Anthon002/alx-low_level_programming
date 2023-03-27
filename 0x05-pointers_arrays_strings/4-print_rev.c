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
	char news[] = *s;
	char c = strlen(news) - 1;

	while (c >= 0)
	{
		_putchar(news[c]);
	};
