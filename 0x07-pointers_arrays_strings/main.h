#ifndef MAIN_H
#define MAIN_H

/* fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* copy memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* locate a character in a string */
char *_strchr(char *s, char c);

/* get the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

#endif
