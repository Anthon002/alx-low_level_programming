#include "lists.h"

/**
 * dlistint_len - number of nodes
 * @h: start pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	return (dlistint_len(h->next) + 1);
}
