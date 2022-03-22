#include <stdlib.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - delete the node at index of linked list
  * @head: pointer to the head pointer of the linked list
  * @index: where the node should be deleted
  * Return: 1 if succeed, -1 if failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL;
	listint_t *indexNode = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	tmp = *head;
	while (i < (index - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	indexNode = tmp->next;
	tmp->next = indexNode->next;
	free(indexNode);

	return (1);
}
