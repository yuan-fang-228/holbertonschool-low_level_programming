#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* return the sum of a and b */
int op_add(int a, int b);

/* return the difference of a and b */
int op_sub(int a, int b);

/* return the product of a and b */
int op_mul(int a, int b);

/* return the result of the division of a by b */
int op_div(int a, int b);

/* returns the remainder of the division of a by b */
int op_mod(int a, int b);

/* select the correct function to perform the operation */
int (*get_op_func(char *s))(int, int);

#endif
