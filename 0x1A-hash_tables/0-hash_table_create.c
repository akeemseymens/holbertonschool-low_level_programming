#include "hash_tables.h"
/**
 *hash_table_create - Initialize a hash table.
 *@size: is the size of the array
 *Return: pointer to the newly created hash table
 *If Failure - should retur NULL
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->array = calloc(size, sizeof(hash_node_t *));
	if (!ht)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	return (ht);
}
