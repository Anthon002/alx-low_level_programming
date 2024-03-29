#include "lists.h"

/**
 * size_t list_len - returns the number of elements in a linked list
 * @h: head of list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
