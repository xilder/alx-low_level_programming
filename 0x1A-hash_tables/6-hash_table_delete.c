#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *table = ht;
	hash_node_t *tmp, *head;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			head = ht->array[i];
			while (head != NULL)
			{
				tmp = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = tmp;
			}	
		}
	}
	free(table->array);
	free(table);
}
