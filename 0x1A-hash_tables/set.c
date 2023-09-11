#include "shash_tables.h"

/**
 * shash_table_set - used to update the hash table
 *
 * @ht: address of hashtable
 * @key: item key
 * @value: item value
 *
 * Return: an integer
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}
	else
	{
		tmp = ht->shead;
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) < 0)
			{
				if (tmp->sprev != NULL)
					tmp->sprev->snext = new_node;
				new_node->sprev = tmp->sprev;
				tmp->sprev = new_node;
				new_node->snext = tmp;
				break;
			}
			if (tmp->snext == NULL)
			{
				tmp->snext = new_node;
				new_node->sprev = tmp;
				break;
			}
			tmp = tmp->snext;
		}
		if (new_node->sprev == NULL)
			ht->shead = new_node;
		if (new_node->snext == NULL)
			ht->stail = new_node;
	}
		return (1);
}

/**
 * shash_table_print - prints the sorted hash table
 *
 * @ht: hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int flag = 1;

	if (ht == NULL || ht->shead == NULL)
		return;
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		if (node->snext == NULL)
			flag = 0;
		printf("'%s': '%s'", node->key, node->value);
		if (flag == 1)
			printf(", ");
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints in reverse
 *
 * @ht: address of table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int flag = 1;

	if (ht == NULL || ht->stail == NULL)
		return;
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		if (node->sprev == NULL)
			flag = 0;
		printf("'%s': '%s'", node->key, node->value);
		if (flag == 1)
			printf(", ");
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete table
 *  @ht: table to be freed
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node != NULL)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
	free(ht->array);
	free(ht);
}
