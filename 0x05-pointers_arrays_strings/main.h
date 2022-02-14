#ifndef MAIN_H
#define MAIN_H

/* print the characters */
int _putchar(char c);

/* takes a pointer to an int as parameter and update value */
void reset_to_98(int *n);

/* swaps the value of two integers */
void swap_int(int *a, int *b);

/* return the length of a string */
int _strlen(char *s);

/* print a string followed by a new line */
void _puts(char *str);

/* print a string in reverse */
void print_rev(char *s);

/* reverse a string */
void rev_string(char *s);

/* print every other character of a string */
void puts2(char *str);

/* print second half of the string */
void puts_half(char *str);

/* print n elements of an array of the integers */
void print_array(int *a, int n);

/* copy the string pointer and add to another string pointer */
char *_strcpy(char *dest, char *src);

#endif
