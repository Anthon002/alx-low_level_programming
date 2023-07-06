#include "hash_tables.h"

/**
 * hash_table_create - creating a hash table
 * @size: size of the array
 * Return: hash_table_s
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table =(hash_table_t*) malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table != NULL)
	{
		table->size = size;
		table->array = (hash_node_t**)malloc(sizeof(hash_node_t*) * size);
		if (table->array != NULL)
		{
			while(i < size)
			{
				table->array[i] = NULL;
				i++;
			}
		}
	}
	return (table);

}
