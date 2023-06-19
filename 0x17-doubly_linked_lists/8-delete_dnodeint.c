#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - removes a node using index
 * @head: double pointer
 * @index: index
 * Return: 1 -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crnt, *temporary;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	crnt = *head;

	if (index == 0)
	{
		*head = crnt->next;
		if (crnt->next != NULL)
			crnt->next->prev = NULL;
		free(crnt);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (crnt->next == NULL)
			return (-1);
		crnt = crnt->next;
	}

	temporary = crnt->next;
	if (temporary == NULL)
		return (-1);

	crnt->next = temporary->next;
	if (temporary->next != NULL)
		temporary->next->prev = crnt;

	free(temporary);
	return (1);
}
