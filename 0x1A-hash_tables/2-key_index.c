#include "hash_tables.h"

/**
 * key_index - it gives the key index
 *
 * @key: is the key
 * @size: size of the array of the hash table
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
