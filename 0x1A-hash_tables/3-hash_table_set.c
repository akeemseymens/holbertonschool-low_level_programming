#include "hash_tables.h"
/**
 *hash_table_set - add an element to the hash table
 *@ht: hash table to add element to hash
 *@key: key of element
 *@value: value of the element
 *Return: 1 if SUCCESS else 0 for FAILURE
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (!ht)
		return (0);
	if (!key)
		return (0);
	if (!value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!curr->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;

	}
	new_node = malloc(sizeof(hash_node_t *));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
		return (0);
	new_node->value = strdup(value);
	if (!new_node->value)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
