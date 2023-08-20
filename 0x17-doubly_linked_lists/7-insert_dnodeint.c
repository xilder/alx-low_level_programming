#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a a value n at a given index idx
 * @h: a pointer to the head of the linked list
 * @idx: index for the value to be inserted
 * @n: value to be inserted
 * Return: NULL if it fails and the pointer to the new node if it passes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head;
	unsigned int i = 0;

	head = *h;
	if (head == NULL)
		new = add_dnodeint(h, n);
	do {
		if (head == NULL)
			return (NULL);
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = head->next;
			new->prev = head->prev;
			head->next->prev = new;
		}
		head = head->next;
		i++;
	} while (i <= idx);
	return (new);
}
