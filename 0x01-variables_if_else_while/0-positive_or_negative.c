#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("is negative");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is positive");
	};
	return (0);
}
