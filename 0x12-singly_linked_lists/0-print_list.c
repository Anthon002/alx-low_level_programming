#include "lists.h"

/**
 * print_list - prints all the elments of a list
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int num_nodes = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		num_nodes++;
		node = node->next;
	}

	return (num_nodes);
}
