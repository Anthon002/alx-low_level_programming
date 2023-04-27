#include "lists.h"

/**
 * print_list - prints alll the elments of a list
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *head)
{
	size_t count = 0;
	const list_t *current = head;

	while (current != NULL)
	{
		printf("[%u] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}

	return (count);
}
