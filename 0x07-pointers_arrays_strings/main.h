#ifndef MAIN_H
#define MAIN_H

/* print the characters */
int _putchar(char c);

/* fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* copy memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* locate a character in a string */
char *_strchr(char *s, char c);

/* get the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* sesrch a string of any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* print the chess board */
void print_chessboard(char (*a)[8]);

/* print the sum of the two diagonals of a square matrix of integers */
void print_diagsums(int *a, int size);

/* locate a substring */
char *_strstr(char *haystack, char *needle);

/* sets the value of a pointer to a char */
void set_string(char **s, char *to);

#endif
