#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding positive numbers.
 * @argc: argument count
 * @argv: arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	char *endptr;
	int index = 1, num, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (argv[index] != NULL)
	{
		num = strtol(argv[index], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
		index++;
	}
	printf("%d\n", sum);

	return (0);
}


