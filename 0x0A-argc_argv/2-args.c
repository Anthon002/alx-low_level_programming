#include <stdio.h>

/**
 * main - print all args
 * @argc: arg count
 * @argv: arg variables
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	while (counter < argc)
	{
		printf("%d\n", argv[counter]);
		counter++;
	};
	return (0);
}
