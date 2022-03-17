#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a new node to the head
 * @head: a pointer pointed to the linked list
 * @str: string to be put in the new node
 * Return: pointer to the new linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
