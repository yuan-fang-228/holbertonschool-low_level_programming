#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - get the nth node of linked list
  * @head: pointer to head node
  * @index: index of nth node
  * Return: the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

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
