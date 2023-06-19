#include "main.h"

/**
 * _islower - checking for lower case letters.
 * @c: checking.
 *
 * Return: 1 or 0.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}

