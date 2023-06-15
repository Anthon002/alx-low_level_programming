#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the indexed node, or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ct = 0;
	dlistint_t *crnt = head;

	while (crnt != NULL)
	{
		if (ct == index)
			return crnt;
		crnt = crnt->next;
		ct++;
	}

	return (NULL);
}
