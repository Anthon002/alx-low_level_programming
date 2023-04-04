#include "main.h"
/**
 * print_sign - Function to print the sign of a number.
 * @num: checking parameter
 *
 * Returns: 1, 0 or -1
 */
int print_sign(int n)
{
    int sign;

    if (n > 0)
	{
	    _putchar('+');
	    sign = 1;
    	} 
	else if (n == 0)
	{
		_putchar('0');
		sign = 0;
	} 
	else
	{
		_putchar('-');
		sign = -1;
	}
	return sign;
}

