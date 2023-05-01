#include "lists.h"

/**
 * size_t print_listint - prints all the elements of a list
 * @h: head node of the list
 * Return:0
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	};

	return (count);
}
