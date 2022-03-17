#include "lists.h"
#include <stdlib.h>

/**
  * free_list - free the list_t list
  * @head: linked list to be freed
  * Return: return void
  */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
