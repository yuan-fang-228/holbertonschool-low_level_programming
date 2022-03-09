#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

typedef unsigned long size_t;

/* print the characters */
int _putchar(char c);

/* print a name */
void print_name(char *name, void (*f)(char *));

/* execute a function given as a parameter on the each element of the array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* a function that searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

#endif
