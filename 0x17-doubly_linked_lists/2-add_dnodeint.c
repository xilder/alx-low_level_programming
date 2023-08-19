#include "lists.h"
/*
 * add_dnodeint - inserts new nodes at the beginning of a list
 * @head - pointer to the beginning of a list
 * @n - value to be added at the beginning of the list
 * Return: returns the address of the new element or NULL if it the function fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	h = *head;
	if (new == NULL)
		return NULL;
	if (h == NULL)
		return NULL;
	while (h->prev != NULL)
		h = h->prev;
	new->next = h;
	h->prev = new;
	*head = new;
	
	return new;
}
