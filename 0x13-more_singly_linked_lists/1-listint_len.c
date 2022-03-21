#include <stdlib.h>
#include "lists.h"

/**
  * listint_len - return the number of elements in linked list
  * @h: pointer to the linked list
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
