#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 *@key: key for the value
 *@size: size of array of the hash table.
 * Return: index key/value that is stored in the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
