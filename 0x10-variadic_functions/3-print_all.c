#include "variadic_functions.h"

/**
 * print_char - print a character
 * @arg:argument
 * Return: void
*/

void print_all(const char * const format, ...)
{
    va_list arg_list;
    int i = 0;
    char *s_arg;

    va_start(arg_list, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(arg_list, int));
                break;

            case 'i':
                printf("%d", va_arg(arg_list, int));
                break;

            case 'f':
                printf("%f", va_arg(arg_list, double));
                break;

            case 's':
                s_arg = va_arg(arg_list, char *);
                if (s_arg == NULL)
                {
                    printf("(nil)");
                    break;
                }
                printf("%s", s_arg);
                break;

            default:
                break;
        }

        if (format[i + 1])
        {
            if (format[i] == 'c' || format[i] == 'i' ||
                format[i] == 'f' || format[i] == 's')
                printf(", ");
        }

        i++;
    }

    printf("\n");
    va_end(arg_list);
}
