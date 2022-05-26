#include "hash_tables.h"

/**
 * key_index - find the index of the key
 * @key: key
 * @size: the size of the array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
