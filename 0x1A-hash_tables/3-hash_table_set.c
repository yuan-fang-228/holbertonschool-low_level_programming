#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - add an elements to the hash table
 * @ht: hash table to be added
 * @key: key
 * @value: value
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode = NULL;
	unsigned long int index, i;

	if (ht == NULL || ht->array == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i] != NULL; i++)
	{
		if (strcmp((ht->array[i]->key), key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
