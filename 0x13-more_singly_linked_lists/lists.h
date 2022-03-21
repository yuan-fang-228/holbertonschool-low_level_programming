#ifndef LISTS_H
#define LISTS_H

/**
  * struct listint_s - singly linked list
  * @n: integer
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  *
  */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* print all the elements of a listin_t list */
size_t print_listint(const listint_t *h);

/* return the number of the elements in listint_t list */
size_t listint_len(const listint_t *h);

/* add new node at the beginning of a lintint_t list */
listint_t *add_nodeint(listint_t **head, const int n);

/* add a new node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* free a listint_t list */
void free_listint(listint_t *head);

/* free a listint_t list and set head to null */
void free_listint2(listint_t **head);

/* delete the head node and return the head node's data */
int pop_listint(listint_t **head);

/* return nth node of a listint_t list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* return the sum of all data of a listint_t linked list */
int sum_listint(listint_t *head);

/* insert a new node at a give position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* delete the node at index of a listint_t list */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
