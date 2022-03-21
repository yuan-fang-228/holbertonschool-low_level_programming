#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - free the linked list and set head to null
  * @head: a pointer pointed to the head pointer of the linked list
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
