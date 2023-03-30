#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
    char *concat_str = dest;

    while (*dest)
    {
        dest++;
    }

    while (*src)
    {
        *dest++ = *src++;
    }

    *dest = '\0';

    return concat_str;
}
