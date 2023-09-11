#include "shash_tables.h"

/**
 * shash_table_create - creates a hash table
 *
 * @size: size of the hashtable
 *
 * Return: the pointer to the address of the table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->size = size;

	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	return (sht);
}
