#include <stdio.h>
/*
 * print_
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	dlistint_t curr = h
	if (!h)
	{
		return (0);
	}
	else
	{
		while (current)
		{
			printf("%d\n", current->n);
			n++;
			current = current->next;
		}
	}
	return (n)
}
