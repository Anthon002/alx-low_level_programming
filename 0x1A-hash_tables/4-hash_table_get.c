#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table pointer.
 * @key: The key.
 *
 * Return: Null or ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	if (key == NULL)
		return (NULL);

	if (*key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			break;
	}

	return ((node == NULL) ? NULL : node->value);
}
