#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table we want to look into
 * @key: Key we are looking for
 * Return: Value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);

}
