#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * my_strlen - function that returns the length of a string.
 * @str: the string whose length needs to be determined.
 * Return: the length of the string.
 */
int my_strlen(const char *str)
{
	const char *str_ptr = str;

	while (*str_ptr != '\0')
	{
		str_ptr++;
	}
	return (str_ptr - str);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list.
 * @str: string to be added.
 * Return: pointer to the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = my_strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

