#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function
 * @c: checking paramaeter
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	};
}
