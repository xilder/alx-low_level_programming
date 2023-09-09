#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table to check
 * @key: key to be found
 *
 * Return: value if key is found or null, if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	const hash_table_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	tmp = ht;
	i = key_index((const unsigned char *) key, ht->size);
	while (tmp->array[i])
	{
		if (strcmp(tmp->array[i]->key, key) == 0)
			return (tmp->array[i]->value);
		tmp->array[i] = tmp->array[i]->next;
	}
	return (NULL);
}
