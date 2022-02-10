#ifndef MAIN_H
#define MAIN_H

/* checks for uppercase character */
int _isupper(int c);

/* check for a digit */
int _isdigit(int c);

/* multiplies two integers */
int mul(int a, int b);

/* print the characters */
int _putchar(char c);

/* print the numbers from 0 to 9 */
void print_numbers(void);

/* print the numbers from 0 to 9 except 2 and 4 */
void print_most_numbers(void);

/* print 10 times the numbers from 0 to 14 */
void more_numbers(void);

/* draw a straight line in the terminal*/
void print_line(int n);

/* draw a diagonal line on the terminal.*/
void print_diagonal(int n);

/* print a square, followed by a new line.*/
void print_square(int size);

#endif
