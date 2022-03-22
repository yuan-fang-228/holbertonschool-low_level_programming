#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - insert a new node at a given position
  * @head: pointer to the head pointer of the linked list
  * @idx: the index of the list where new node should be added in.
  * @n: data of the new node
  * Return: address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL;
	listint_t *tmp = NULL;
	unsigned int i = 1;

	if (head == NULL || *head == NULL)
		return (NULL);
	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	tmp = *head;
	while (i <= idx)
	{
		tmp = tmp->next;
		i++;
	}
	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
