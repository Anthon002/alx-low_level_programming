#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - adds a new node 
 * @h: double pointer 
 * @idx: index 
 * @n: data
 * Return: pointer to the new node, or (NULL) on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nd, *crnt;
	unsigned int i;

	if (h == (NULL))
		return (NULL);

	nd = malloc(sizeof(dlistint_t));
	if (nd == (NULL))
		return (NULL);

	nd->n = n;
	nd->prev = (NULL);
	nd->next = (NULL);

	if (idx == 0)
	{
		if (*h != (NULL))
		{
			(*h)->prev = nd;
			nd->next = *h;
		}
		*h = nd;
		return nd;
	}

	crnt = *h;
	for (i = 0; i < idx - 1 && crnt != (NULL); i++)
		crnt = crnt->next;

	if (crnt == (NULL))
	{
		free(nd);
		return (NULL);
	}

	nd->next = crnt->next;
	if (crnt->next != (NULL))
		crnt->next->prev = nd;
	crnt->next = nd;
	nd->prev = crnt;

	return (nd);
}
