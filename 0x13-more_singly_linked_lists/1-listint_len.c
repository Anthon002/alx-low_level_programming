#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: head node of list
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	};

	return (count);
}
