#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print alphabet in upper case'
 * Return: Always 0 (Success)
 */

int main(void)
{
        char alphab;

        for (alphab = 'A'; alphab <= 'Z'; alphab++)
        {
                putchar(alphab);
        };
        putchar('\n');
        return (0);
}
