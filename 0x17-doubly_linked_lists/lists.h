#ifndef LIST_H
#define LIST_H

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* print all the elements of a double linked list */
size_t print_dlistint(const dlistint_t *h);

/* return the number of elements in a linked list */
size_t dlistint_len(const dlistint_t *h);

/* add new node at the beginning of a double linked list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* add new node at the end of a double linked list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* free a double linked list */
void free_dlistint(dlistint_t *head);

/* return the nth node of a double linked list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* returns the sum of all the data of a double linked list */
int sum_dlistint(dlistint_t *head);

/* inserts a new node at a given position of a double linked list */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* deletes the node at index index of a dlistint_t linked list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif

