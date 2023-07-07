#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: the size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int long_index = hash_djb2(key);
	unsigned long int short_index = (long_index % size);

	return (short_index);
}
