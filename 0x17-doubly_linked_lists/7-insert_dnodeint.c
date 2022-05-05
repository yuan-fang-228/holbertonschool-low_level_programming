#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return nth nod of a double linked list
 * @head: head pointer
 * @index: node index to be found
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to head pointer
 * @idx: index to be found
 * @n: number to be inserted
 * Return: address of newnode, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *nthnode = NULL;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		if (newnode == NULL)
			return (NULL);
		return (newnode);
	}
	nthnode = get_dnodeint_at_index(*h, idx);
	newnode->n = n;
	if (nthnode->next == NULL)
		return (add_dnodeint_end(h, n));
	newnode->prev = nthnode->prev;
	nthnode->prev->next = newnode;
	newnode->next = nthnode;
	nthnode->prev = newnode;

	return (newnode);
}
