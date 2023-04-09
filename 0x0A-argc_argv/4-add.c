#include <stdio.h>
#include <stdlib.h>

/**
 * main - add arguments
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0;

	for (int i = 1; i < argc; i++)
	{
		if (atoi(argv[1]))
		{
			a += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	};
	printf("%d\n", a);
	return (0);
}
