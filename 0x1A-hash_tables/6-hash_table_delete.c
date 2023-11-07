#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *tmp, *delete;

	if (ht)
	{
		for (x = 0; x < ht->size; x++)
		{
			tmp = ht->array[x];
			while (tmp)
			{
				delete = tmp;
				tmp = tmp->next;
				free(delete->key);
				free(delete->value);
				free(delete);
			}
		}
		free(ht->array);
		free(ht);
	}
}
