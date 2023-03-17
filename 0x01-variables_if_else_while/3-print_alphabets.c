#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		putchar(alphab);
	};
	for (alphab = 'A'; alphab <= 'Z'; alphab++)
	{
		putchar(alphab);
	};
	putchar('\n');

	return (0);
}

