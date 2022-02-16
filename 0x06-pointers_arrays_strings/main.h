#ifndef MAIN_H
#define MAIN_H

/*  concatenates two strings */
char *_strcat(char *dest, char *src);

/* concatenates two strings only use at most n bytes from src */
char *_strncat(char *dest, char *src, int n);

/* copy a string and use '0\' to fill out the test */
char *_strncpy(char *dest, char *src, int n);

/* compare two strings */
int _strcmp(char *s1, char *s2);

/* reverse the content of an array of integers */
void reverse_array(int *a, int n);

#endif
