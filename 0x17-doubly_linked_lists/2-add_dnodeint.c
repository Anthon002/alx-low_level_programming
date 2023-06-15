#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node
 * @head: pointer to the head of the linked list
 * @n: value of the new node
 *
 * Return: pointer to the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_nd, *curnt;

	if (head == NULL)
		return NULL;

	n_nd = malloc(sizeof(dlistint_t));
	if (n_nd == NULL)
		return NULL;

	n_nd->n = n;
	n_nd->next = NULL;

	if (*head == NULL)
	{
		n_nd->prev = NULL;
		*head = n_nd;
	}
	else
	{
		curnt = *head;
		while (curnt->next != NULL)
			curnt = curnt->next;
		curnt->next = n_nd;
		n_nd->prev = curnt;
	}

	return n_nd;
}
