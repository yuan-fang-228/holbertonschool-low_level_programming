#ifndef MAIN_H
#define MAIN_H

/* allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* concatenates two strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* allocates memory for an array */
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
