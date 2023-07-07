#include "hash_tables.h"
/**
 * hash_djb2 - the daniel j bernstein hash function
 * str: the key
 * Return: the unique index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	    unsigned long int hash = 5321;
	    int *character = (int *)malloc(sizeof(int)*100);
    int i = 0;

    while (*str != '\0')
    {
        character[i] = (int)*str;
       hash = ((hash << 5 )+hash)+character[i];
        str++;
        i++;
    };
    return(hash);
    free(character);
}
