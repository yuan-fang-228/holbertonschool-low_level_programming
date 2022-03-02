#ifndef MAIN_H
#define MAIN_H

/* print the characters */
int _putchar(char c);

/* creates an array of chars, initializes with a specific char */
char *create_array(unsigned int size, char c);

/* return a newly allocated memory with the given string */
char *_strdup(char *str);

/* concatenates two strings */
char *str_concat(char *s1, char *s2);

/* returns a pointer to a 2 dimensional array of integers */
int **alloc_grid(int width, int height);

/* frees a 2 dimensional grid */
void free_grid(int **grid, int height);

/* concatenates all the arguments of the command */
char *argstostr(int ac, char **av);

#endif
