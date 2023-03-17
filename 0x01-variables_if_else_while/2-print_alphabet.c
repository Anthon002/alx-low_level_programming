#include <stdio.h>

/**
 *main - Entry point
 *Description - printing out the letters in lowercase
 *Return - Always (0) sucess
 */

int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		putchar(alphab);
	};
	putchar('\n');
	return (0);
}
