#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program into a single string
 * @ac: number of arguments
 * @av: array of strings containing the arguments
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
    char *result;
    int i, j, total_len = 0;

    if (ac == 0 || av == NULL)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        total_len += strlen(av[i]);
        total_len++;
    }

    result = (char *) malloc(sizeof(char) * (total_len + 1));
    if (result == NULL)
        return NULL;

    for (i = 0, j = 0; i < ac; i++)
    {
        strcpy(result + j, av[i]);
        j += strlen(av[i]);
        result[j++] = '\n'; 
    }
    result[total_len] = '\0';

    return result;
}