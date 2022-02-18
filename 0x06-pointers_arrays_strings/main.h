#ifndef MAIN_H
#define MAIN_H

/* print the characters */
int _putchar(char c);

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

/* change all lowercase letters of a string to uppercase */
char *string_toupper(char *l);

/* capitalizes all words of a string */
char *cap_string(char *str);

/* encodes a string into 1337 */
char *leet(char *str);

/* encodes a string using rot13 */
char *rot13(char *str);

/* use putchar to print an integer */
void print_number(int n);

#endif
