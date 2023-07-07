#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table pointer.
 * @key: The key .
 * @value: The value.
 *
 * Return:0 or 1;
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *valcpy;
	unsigned long int index, i;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	if (value == NULL)
		return (0);

	valcpy = strdup(value);
	if (valcpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	i = index;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valcpy;
			return (1);
		}
		i++;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valcpy);
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(valcpy);
		return (0);
	}

	new_node->value = valcpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
