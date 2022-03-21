#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - delete head node of a linked list
  * @head: a pointer pointed to head pointer of the linked list
  * Return: head note's data
  */
int pop_listint(listint_t **head)
{
	listint_t *newHead = NULL;
	int num;

	if (*head == NULL || head == NULL)
		return (0);
	while (*head != NULL)
	{
		num = (*head)->n;
		newHead = (*head)->next;
		free(*head);
		*head = newHead;
	}

	return (num);
}
