#include "main.h"
/**
 * rev_string - main function
 * @s: parameter
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int a, b, c;
	char d;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
