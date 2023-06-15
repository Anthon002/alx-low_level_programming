#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - node to the end of a list
 * @head: pointer to beginning of list
 * @n: value
 *
 * Return: pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nNode, *temporary;

	if (head == NULL)
		return (NULL);

	nNode = malloc(sizeof(dlistint_t));
	if (nNode == NULL)
		return (NULL);

	nNode->n = n;
	nNode->next = NULL;

	if (*head == NULL)
	{
		nNode->prev = NULL;
		*head = nNode;
		return (nNode);
	}

	temporary = *head;
	while (temporary->next != NULL)
		temporary = temporary->next;

	temporary->next = nNode;
	nNode->prev = temporary;

	return (nNode);
}
