#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a list
 * @h: start pointer
 * Return: nodes number
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
