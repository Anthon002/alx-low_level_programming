#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
    unsigned int len = 0;
    list_t *new_node;

    while (str[len] != '\0')
    {
        len++;
    }

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->str = malloc(sizeof(char) * (len + 1));
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    for (unsigned int i = 0; i <= len; i++)
    {
        new_node->str[i] = str[i];
    }

    new_node->len = len;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
