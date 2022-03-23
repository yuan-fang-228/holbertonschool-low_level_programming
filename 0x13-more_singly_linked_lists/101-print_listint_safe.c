#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_listint_safe - print a linked list safe version
  * @head: pointer to head node
  * Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	long int add1, add2;

	while (head != NULL)
	{
		add1 = (long int)head;
		add2 = (long int)head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (add1 - add2 > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
