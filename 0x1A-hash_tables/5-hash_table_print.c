#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table.
 * @ht: hash table pointer.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long j;
	unsigned char comma_fg = 0;

	if (ht == NULL)
		return;

	printf("{");
	j = 0;
	while (j < ht->size)
	{
		if (ht->array[j] != NULL)
		{
			if (comma_fg == 1)
				printf(", ");

			nd = ht->array[j];
			for (; nd != NULL; nd = nd->next)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				if (nd->next != NULL)
					printf(", ");
			}
			comma_fg = 1;
		}
		j++;
	}
	printf("}\n");
}
