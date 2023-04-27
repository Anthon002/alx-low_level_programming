#include "lists.h"

/**
 * print_list - prints alll the elments of a list
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current;

	current = h->next;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("%s", "[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}
	return (count);
}
