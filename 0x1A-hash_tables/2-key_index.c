#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 *
 * Return: index key/value that is stored in the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
