#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds new element at beginiing of list
 * @head: Pointer
 * @n: Element in list
 * Return: New element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
