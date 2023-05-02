#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function to delete the head node
 * @head:head node of the list
 * Return: deleted node
 */
int pop_listint(listint_t **head)
{
    listint_t *current_head;
    int value;

    if (head == NULL || *head == NULL)
        return 0;

    current_head = *head;
    value = current_head->n;
    *head = current_head->next;
    free(current_head);

    return value;
}
