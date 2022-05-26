#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashtable;
	unsigned long int i;

	newHashtable = malloc(sizeof(*newHashtable));
	if (newHashtable == NULL)
		return (NULL);

	newHashtable->size = size;
	newHashtable->array = malloc(sizeof(*newHashtable->array) * size);
	if (newHashtable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		newHashtable->array[i] = NULL;

	return (newHashtable);
}
