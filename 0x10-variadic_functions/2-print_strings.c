#include "variadic_functions.h"

/**
* print_strings - Prints strings separated by separator string.
* @separator: The separator string to be used .
* @count: The number of strings to be printed.
* @...: The list of strings to be printed.
*/
void print_strings(const char *separator, const unsigned int count, ...)
{
    char *string;
    unsigned int i = 0;
    va_list args;
    va_start(args, count);

  if (separator == NULL)
  {
    separator = "";
  }

  while (i < count)
  {
    string = va_arg(args, char*);
    if (string == NULL)
    {
      string = "(nil)";
    }

    printf("%s", string);

    if (i < count - 1)
    {
      printf("%s", separator);
    }

    i++;
  }

  printf("\n");
  va_end(args);
}
