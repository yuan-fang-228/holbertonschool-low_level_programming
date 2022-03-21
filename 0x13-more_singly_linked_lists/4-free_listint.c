#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - free a linked list
  * @head: pointed to the linked list
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
