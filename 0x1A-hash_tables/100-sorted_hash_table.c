#include "hash_tables.h"
#include <stdio.h>

/**
 * shash_table_create - Creates a hash table
 * @size: Size of the array
 * Return: Pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int x;

	if (!size)
		return (NULL);

	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	new_table->shead = NULL;
	new_table->stail = NULL;
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		new_table->array[x] = NULL;

	return (new_table);
}

/**
 * update_val - Updates the value of a key in a hash table
 * @head: Pointer to the head of the linked list
 * @key: Key to search for in the hash table
 * @value: New value to update
 * Return: If success 1, otherwise 0
 */
int update_val(shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *cp = *head;
	char *newValue;

	while (cp)
	{
		if (strcmp(cp->key, key) == 0)
		{
			newValue = strdup(value);
			if (!cp->value)
				return (-1);
			free(cp->value);
			cp->value = newValue;
			return (1);
		}
		cp = cp->next;
	}
	return (0);
}

/**
 * add_node - Adds a new node to a hash table
 * @head: Pointer to the head of the linked list
 * @key: Key of the new node
 * @value: Value of the new node
 * Return: Pointer to the newly added node, failure NULL
 */
shash_node_t *add_node(shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *new;
	char *newKey, *newValue;


	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (NULL);

	newKey = strdup(key);
	if (!newKey)
	{
		free(new);
		return (NULL);
	}
	newValue = strdup(value);
	if (!newValue)
	{
		free(new);
		free(newKey);
		return (NULL);
	}

	new->key = newKey;
	new->value = newValue;
	new->next = *head;

	*head = new;
	new->snext = NULL;
	new->sprev = NULL;
	return (*head);
}

/**
 * sorted_linked_list - Sets doubly linked list
 * @ht: Hash table we want to look into
 * @new: Node to sort
 * Return: Pass or fail
 */
int sorted_linked_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *sorter;

	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	if (strcmp(new->key, ht->shead->key) < 0)
	{
		ht->shead->sprev = new;
		new->snext = ht->shead;
		ht->shead = new;
		return (1);
	}
	else
	{
		sorter = ht->shead->snext;
		while (sorter && strcmp(new->key, sorter->key) > 0)
			sorter = sorter->snext;
		if (!sorter)
		{
			new->sprev = ht->stail;
			ht->stail->snext = new;
			ht->stail = new;
			return (1);
		}
		new->sprev = sorter->sprev;
		sorter->sprev->snext = new;
		sorter->sprev = new;
		new->snext = sorter;
	}
	return (1);
}

/**
 * shash_table_set - Adds/updates a key-value pair in a hash table
 * @ht: Pointer to the hash table
 * @key: Key of the key-value pair
 * @value: Value of the key-value pair
 * Return: If success 1, otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	shash_node_t *new;
	unsigned long int index;
	int isUpdate;

	if (!ht || !ht->size || !strlen(key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	isUpdate = update_val(&(ht->array[index]), key, value);
	if (isUpdate == 0)
	{
		new = add_node(&(ht->array[index]), key, value);
		if (!new)
			return (0);

		ht->array[index] = new;
	}
	else if (isUpdate == -1)
		return (0);
	return (sorted_linked_list(ht, new));
}

/**
 * shash_table_get - Retrieves the value OF a key in a hash table
 * @ht: Hash table we want to look into
 * @key: Key we are looking for
 * Return: Pointer to the value of the key, if not founf NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

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

/**
 * shash_table_print - Print a hash table
 * @ht: Hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int isComa = 0;
	shash_node_t *node;

	if (ht)
	{
		printf("{");
		node = ht->shead;
		while (node)
		{
			if (isComa)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			isComa = 1;
			node = node->snext;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - Prints a reversed hash table
 * @ht: Hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int isComa = 0;
	shash_node_t *tail;

	if (ht)
	{
		printf("{");
		tail = ht->stail;
		while (tail)
		{
			if (isComa)
				printf(", ");
			printf("\'%s\': \'%s\'", tail->key, tail->value);
			isComa = 1;
			tail = tail->sprev;
		}
		printf("}\n");
	}
}
/**
 * shash_table_delete - Deletes a hash table
 * @ht: Hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int x;
	shash_node_t *tmp, *delete;

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
