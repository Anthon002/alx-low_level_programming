#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at end of a listint_t list.
 * @head: pointer to the head node of the list
 * @n: integer to add to the list
 * Return: pointer to the new node at the end of the list, NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	return (new_node);
}
