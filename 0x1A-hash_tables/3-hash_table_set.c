#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to add or update the key/value
 * @key: key value
 * @value: the value associated with the key
 *
 * Return: 1 if successful and 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[i] == NULL)
	{
		ht->array[i] = new_node;
		return (1);
	}
	else
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[i];
		ht->array[i] = new_node;
		return (1);
	}
}
