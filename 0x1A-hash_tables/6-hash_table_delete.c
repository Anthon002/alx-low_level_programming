#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to delete.
 *
 * Description: Frees the memory used by the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *nd, *temp;
	unsigned long int j;

	if (hd == NULL)
		return;

	j = 0;
	while (j < hd->size)
	{
		if (hd->array[j] != NULL)
		{
			nd = hd->array[j];
			while (nd != NULL)
			{
				temp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = temp;
			}
		}
		j++;
	}

	free(hd->array);
	free(hd);
}
