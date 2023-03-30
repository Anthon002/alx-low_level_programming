#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat() - concat the two parameters
 * @dest: first parameter
 * @src: second parameter
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
  strcat(*dest,*src);
  return (*dest);
}
