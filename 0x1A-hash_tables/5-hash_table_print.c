#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (flag == 0)
				{
					printf("'%s': '%s'", tmp->key, tmp->value);
					flag = 1;
				}
				else
					printf(", '%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
