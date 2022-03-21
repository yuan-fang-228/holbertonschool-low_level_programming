#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - add new node at the end of a linked list
  * @head: a pointer pointed to linked list
  * @n: number to be put in the new node
  * Return: the address of new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *lastNode = NULL;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}

	return (newNode);
}
