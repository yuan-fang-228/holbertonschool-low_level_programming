#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* print the characters */
int _putchar(char c);

/* print all the elements of a list_t list */
size_t print_list(const list_t *h);

/* get the number of elements in the linked list */
size_t list_len(const list_t *h);
#endif
