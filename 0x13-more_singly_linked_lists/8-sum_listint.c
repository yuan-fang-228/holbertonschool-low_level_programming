#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - sum up all the data in the linked list
  * @head: pointer to head node
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
