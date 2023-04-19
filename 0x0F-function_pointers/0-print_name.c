#include <stdio.h>
#include "main.h"

/**
 * print_name: function that  prints a name
 * @name: char name
 * @f:fucntion that takes in name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
