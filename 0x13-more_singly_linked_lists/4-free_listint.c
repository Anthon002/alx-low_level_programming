#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head:  head of the list
 * Return: void
 */
 
void free_listint(listint_t *head)
{
    listint_t *current, *next_node;

    current = head;
    while (current != NULL)
    {
        next_node = current->next;
        free(current);
        current = next_node;
    }
}
