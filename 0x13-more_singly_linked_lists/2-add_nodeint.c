#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: head node of list
 * @n: data
 * Return:address of new node or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	newNode = (listint_t*)malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
