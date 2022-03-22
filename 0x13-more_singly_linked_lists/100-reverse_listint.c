#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - reverse a linked list
  * @head: pointer to the head pointer of the linked list
  * Return: new linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}
	*head = pre;

	return (*head);
}
