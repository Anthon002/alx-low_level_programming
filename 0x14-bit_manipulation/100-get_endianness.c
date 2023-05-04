#include "main.h"

/**
 * get_endianness - checking endianness 
 * Return: 0 or 1
 */
int get_endianness(void)
{
    int num = 1;
    char *ptr = (char *)&num;

    if (*ptr == 1)
    {
        /* Little endian */
        return 1;
    }
    else
    {
        /* Big endian */
        return 0;
    }
}
