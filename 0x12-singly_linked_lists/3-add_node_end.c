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
 * add_node_end - adds a new node to the end of the list.
 * @head: head of list.
 * @str: string.
 * Return: pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;

    if (str == NULL)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = my_strlen(new_node->str);
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    return (new_node);
}
