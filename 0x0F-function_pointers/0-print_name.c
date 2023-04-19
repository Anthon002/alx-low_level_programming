#include <stdio.h>
#include "main.h"

/**
 * print_name: function to print a name
 * @name: char name
 * @f:fucntion that takes in name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
