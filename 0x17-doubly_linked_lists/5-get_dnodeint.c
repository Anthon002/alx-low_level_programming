#include "lists.h"

/**
 * get_dnodeint_at_index - finds a  node from a linked list
 * @head: pointer
 * @index: index
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ct = 0;
	dlistint_t *crnt = head;

	while (crnt != NULL)
	{
		if (ct == index)
			return (crnt);
		crnt = crnt->next;
		ct++;
	}

	return (NULL);
}
