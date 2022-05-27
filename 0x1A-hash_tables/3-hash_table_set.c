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
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0 || ht->array == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp((ht->array[index]->key), key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
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
