#include <stdlib.h>
#include "lists.h"

/**
  * list_len - get the number of elements in a linked list
  * @h: pointer to the linked list
  * Return: the number of elements
  */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
