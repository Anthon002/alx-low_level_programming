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
		if (alphab == 'q' || alphab == 'e')
		{
			continue;
		}
		else
		{
			putchar(alphab);
		}
	};
	putchar('\n');

	return (0);
}
