#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes -function to print opcode
 * @a: address
 * @n: number of bytes
 * Return: void
 */
void print_opcodes(char *a, int n)
{
  int i = 0;

    while (i < n)
    {
        printf("%.2hhx", a[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
        i++;
    }
    printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
    int n;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }
    else
    {
        n = atoi(argv[1]);
        if (n < 0)
        {
            printf("Error\n");
            exit(2);
        }
        else
        {
            print_opcodes((char *)&main, n);
            return (0);
        }
    }
}
