#ifndef MAIN_H
#define MAIN_H

/* print the characters */
int _putchar(char c);

/* convert a binary number to unsigned int */
unsigned int binary_to_uint(const char *b);

/* print binary representation of a number */
void print_binary(unsigned long int n);

/* return the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* set the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* set the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* returns the number of bits you would need to flip to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
