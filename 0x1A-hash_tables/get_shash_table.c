#include "shash_tables.h"

/**
 * shash_table_get - retrieves the value for a key if available
 *
 * @ht: address of hashtable
 * @key: key
 *
 * Return: the key if found or null if not
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (strcmp(ht->array[i]->key, key) == 0)
		return (ht->array[i]->value);
	tmp = ht->shead;

	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->snext;
	printf("gotten");
	return ((tmp) ? tmp->value : NULL);
}
