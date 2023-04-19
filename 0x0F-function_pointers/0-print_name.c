#include <stddef.h>
#include "main.h"
/**
 * print_name - function that prints name
 * @name: char name
 * @f: function that takes name
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
