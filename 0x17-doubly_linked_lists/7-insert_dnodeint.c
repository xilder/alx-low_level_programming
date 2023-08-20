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
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (idx > 0)
	{
		do {
			if (i == idx)
			{
				if (head->next == NULL)
				{
					new = add_dnodeint_end(h, n);
					return (new);
				}
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new == NULL)
						return (NULL);
					new->n = n;
					new->next = head->next;
					new->prev = head->prev;
					head->next->prev = new;
					heaad->next = new;
				}
			}
			head = head->next;
			i++;
		} while (i <= idx);
		return (new);
	}
	else
	{
		return (NULL);
	}
}
