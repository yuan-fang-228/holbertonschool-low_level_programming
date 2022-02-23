#ifndef MAIN_H
#define MAIN_H

/* print the characters */
int _putchar(char c);

/* prints a string, followed by a new line. */
void _puts_recursion(char *s);

/* print a string in reverse */
void _print_rev_recursion(char *s);

/* return the length of a string */
int _strlen_recursion(char *s);

/* do the factorial of a given number */
int factorial(int n);

/* return the caculation of the power of integer */
int _pow_recursion(int x, int y);

/* return the natural square root of a number*/
int _sqrt_recursion(int n);

/* check if the input integer is a prime number*/
int is_prime_number(int n);

/* return 1 if a string is a palindrome and 0 if not*/
int is_palindrome(char *s);

#endif
