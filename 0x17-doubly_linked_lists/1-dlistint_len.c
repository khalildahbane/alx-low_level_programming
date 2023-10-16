#include "lists.h"

/**
 * dlistint_len - Return list len
 * @h: Struct list
 * Return: list_len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int x = 0;

	for (x = 0; h; x++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
