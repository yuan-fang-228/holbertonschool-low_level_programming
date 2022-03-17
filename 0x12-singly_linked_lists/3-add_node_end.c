#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - add a new node to the end of a linked list
  * @head: pointer to the linked list
  * @str: a string to put in the new node
  * Return: pointer to the new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;
	int count = 0;
	char *newStr;

	newStr = strdup(str);
	if (newStr == NULL)
		return (NULL);
	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	newNode->str = newStr;
	newNode->len = count;
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
