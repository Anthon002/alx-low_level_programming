#include "main.h"
/**
 *print_most_numbers - main function
 *print numbers but 2 and 4
 *Return: void
 */
void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
		{
			continue;
		}
		else
		{
			_putchar(a);
		};
	};
	_putchar('\n');
}
