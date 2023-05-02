#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  freeing a  list
 * @head: head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
    listint_t *current, *next_node;

    if (head == NULL || *head == NULL)
        return;

    current = *head;
    while (current != NULL)
    {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    *head = NULL;
}
