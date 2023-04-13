#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: space
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0, j = 0, k = 0;
    char *concat;

    if (s1 == NULL)
    {
        i = 0;
    }
    else
    {
        while (s1[i] != '\0')
        {
            i++;
        }
    }
    if (s2 == NULL)
    {
        j = 0;
    }
    else
    {
        while (s2[j] != '\0')
        {
            j++;
        }
    }

    if (j > n)
    {
        j = n;
    }
    concat = malloc(sizeof(char) * (i + j + 1));

    if (concat == NULL)
    {
        return (NULL);
    }
    else
    {
        i = 0;

        while (s1[i] != '\0')
        {
            concat[k] = s1[i];
            i++;
            k++;
        }

        j = 0;

        while (j < n && s2[j] != '\0')
        {
            concat[k] = s2[j];
            j++;
            k++;
        }

        concat[k] = '\0';
        return (concat);
    }
}
