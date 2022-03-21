#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - add a new node at the beginning of a linked list
  * @head: a pointer pointed to the linked list
  * @n: number to be put in the new node
  * Return: new linked list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
