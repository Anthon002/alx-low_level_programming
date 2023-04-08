#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument array
 * Return:0
 */

int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error: please provide two integer arguments\n");
	}
	return (0);
}
