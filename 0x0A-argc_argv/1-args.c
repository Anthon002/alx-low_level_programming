#include <stdio.h>
#include <stdlib.h>

/**
 * main - print then no. of args
 * @argc: no. of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
