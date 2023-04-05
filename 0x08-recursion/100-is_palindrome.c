#include "main.h"

/**
 * string_length - Calculates the length of the string
 * @str: Pointer to the string
 * Return: The length of the string
 * check_palindrome - Check if a string is palindrome or not
 * @str: Pointer to the string
 * @left: The left index of the string
 * @right: The right index of the string
 * Return: 1 if the string is palindrome, 0 otherwise
 * is_palindrome - Check if a string is palindrome or not
 * @s: Pointer to the string
 * Return: 1 if the string is palindrome, 0 otherwise
 * 
 */
int string_length(char *s)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + string_length(str + 1));
}


int check_palindrome(char *str, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (str[left] != str[right])
	{
		return (0);
	}
	return (check_palindrome(str, left + 1, right - 1));
}

int is_palindrome(char *s)
{
	int len = string_length(s) - 1;
	return (check_palindrome(s, 0, len));
}
