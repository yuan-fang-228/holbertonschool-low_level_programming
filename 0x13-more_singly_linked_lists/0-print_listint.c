#include <stdio.h>
#include "lists.h"

/**
  * print_listint - print all the elements of a linked list
  * @h: pointer to listin_t list
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
