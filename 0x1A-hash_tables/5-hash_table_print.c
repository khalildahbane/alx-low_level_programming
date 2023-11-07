#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int cont = 0, x = 0;

	if (ht != NULL)
	{
		printf("{");

		for (cont = 0; cont < ht->size; cont++)
		{
			node = ht->array[cont];

			while (node != NULL)
			{
				if (x != 0)
					printf(", ");
				x = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}

		printf("}\n");
	}
}
