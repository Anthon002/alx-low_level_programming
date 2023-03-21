#include <stdio.h>

/**
 * main - Print lowercase
 * Return: Always 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char a;

	for(a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	};
}
