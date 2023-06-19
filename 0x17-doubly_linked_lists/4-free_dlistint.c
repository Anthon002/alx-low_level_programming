#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees list
 * @head: points to the start of a linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *crnt, *nxt;

	crnt = head;
	while (crnt != NULL)
	{
		nxt = crnt->next;
		free(crnt);
		crnt = nxt;
	}
}
