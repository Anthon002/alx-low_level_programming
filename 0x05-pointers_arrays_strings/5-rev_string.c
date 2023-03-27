#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - main function
 * @s:parameter
 * Return: void;
 */

void rev_string(char *s)
{
	*s = strrev(s);
}
