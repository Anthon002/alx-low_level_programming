#include "main.h"

/**
 * is_lowercase - checking for lower case letters.
 * @ch: checking.
 *
 * Return: 1 or 0.
 */
int is_lowercase(int ch)
{
    if (ch >= 'a' && ch <= 'z')
        return (1);
    else
        return (0);
}

