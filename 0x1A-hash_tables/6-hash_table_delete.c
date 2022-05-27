#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
		delete_list(ht->array[i]);
	free(ht->array);
	free(ht);
}

/**
 * delete_list - deleted the linked list in hash table
 * @head: head node of the linked list
 * Return: void
 */
void delete_list(hash_node_t *head)
{
	hash_node_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = tmp;
	}
}
