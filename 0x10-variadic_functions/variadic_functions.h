#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

/* a function that returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);

/* a function that prints numbers followed by a new line */
void print_numbers(const char *separator, const unsigned int n, ...);

/* a function that prints strings, followed by a new line */
void print_strings(const char *separator, const unsigned int n, ...);

/* a function that prints anything */
void print_all(const char * const format, ...);

#endif
